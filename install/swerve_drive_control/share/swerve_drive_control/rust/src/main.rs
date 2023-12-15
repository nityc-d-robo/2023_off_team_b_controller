use safe_drive::{
    context::Context, error::DynError, logger::Logger, pr_info
};

use num_traits::pow::Pow;

use core::f64::consts::PI;

const  WHEEL_DIA: f64 = 0.100;      //ホイールの直径［m］
const  ROBOT_CENTER_TO_WHEEL_DISTANCE: f64 = 0.37;  //ロボットの中心からホイールまでの距離[m]

struct Component {
    x: f64,
    y: f64
}

fn main() -> Result<(), DynError> {
    // Create a context.
    let ctx = Context::new()?;

    // Create a node.
    let node = ctx.create_node("swere_drive_control", None, Default::default())?;

    // Create a publisher.
    let publisher = node.create_publisher::<drobo_interfaces::msg::MdLibMsg>("md_driver_topic", None)?;

    // Create a logger.
    let logger = Logger::new("swere_drive_control");

    let mut msg = drobo_interfaces::msg::MdLibMsg::new().unwrap();

    let mut selector = ctx.create_selector()?;

    loop {
        selector.wait()?;
    }
}

fn move_chassis(_xrpm: f64, _yrpm: f64, _yaw: f64) {
    let speed_abs: f64 = (_xrpm*_xrpm +_yrpm*_yrpm).sqrt();
    let rad: f64 = _yrpm.atan2(_xrpm);
    
    //回転成分　θ・R _yawの０基準を前方にしてロボットからの距離をかける
    let rotation_component: f64 = (_yaw - PI/2.0) * ROBOT_CENTER_TO_WHEEL_DISTANCE;

    //各ホイールのx,y成分を出す。並進成分と回転成分を合成
    let front_left_component = Component{
        x : (_xrpm - (2_f64).sqrt()/2.0 * rotation_component) as f64,
        y : (_yrpm - (2_f64).sqrt()/2.0 * rotation_component) as f64
    };
    let front_right_component = Component{
        x : (_xrpm - (2_f64).sqrt()/2.0 * rotation_component) as f64,
        y : (_yrpm + (2_f64).sqrt()/2.0 * rotation_component) as f64
    };
    let rear_left_component = Component{
        x : (_xrpm + (2_f64).sqrt()/2.0 * rotation_component) as f64,
        y : (_yrpm - (2_f64).sqrt()/2.0 * rotation_component) as f64
    };
    let rear_right_component = Component{
        x : (_xrpm + (2_f64).sqrt()/2.0 * rotation_component) as f64,
        y : (_yrpm + (2_f64).sqrt()/2.0 * rotation_component) as f64
    };

    //各ホイールの方向を出す
    let front_left_yaw: f64 = front_left_component.y.atan2(front_left_component.x);
    let front_right_yaw: f64 = front_right_component.y.atan2(front_right_component.x);
    let rear_left_yaw: f64 = rear_left_component.y.atan2(rear_left_component.x);
    let rear_right_yaw: f64 =rear_right_component.y.atan2(rear_right_component.x);


    let front_left_speed: i64 = ((front_left_component.x.powf(2.0) + front_left_component.y.powf(2.0)).sqrt() / WHEEL_DIA) as i64;
    let front_right_speed: i64 = ((front_right_component.x.powf(2.0) + front_right_component.y.powf(2.0)).sqrt() / WHEEL_DIA) as i64;
    let rear_left_speed: i64 = ((rear_left_component.x.powf(2.0) + rear_left_component.y.powf(2.0)).sqrt() / WHEEL_DIA) as i64;
    let rear_right_speed: i64 = ((rear_right_component.x.powf(2.0) + rear_right_component.y.powf(2.0)).sqrt() / WHEEL_DIA) as i64;

    move_wheel(front_left_yaw, front_left_speed);
    move_wheel(front_right_yaw, front_right_speed);
    move_wheel(rear_left_yaw, rear_left_speed);
    move_wheel(rear_right_yaw, rear_right_speed);
}

fn move_wheel(_wheel_yaw: f64, _power: i64){
    //いい感じに制御しよう

}

fn send_pwm(_adress: u8, _semi_id: u8, _phase: bool, _power: u16){
    //motor_libをたたく。md_driver_topicにpublishする
}