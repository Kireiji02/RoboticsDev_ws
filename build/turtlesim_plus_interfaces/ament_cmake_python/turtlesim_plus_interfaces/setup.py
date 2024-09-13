from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlesim_plus_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('turtlesim_plus_interfaces', 'turtlesim_plus_interfaces.*')),
)
