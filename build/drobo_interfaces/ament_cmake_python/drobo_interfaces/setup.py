from setuptools import find_packages
from setuptools import setup

setup(
    name='drobo_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('drobo_interfaces', 'drobo_interfaces.*')),
)
