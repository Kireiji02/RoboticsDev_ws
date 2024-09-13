from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlesim_plus',
    version='1.0.0',
    packages=find_packages(
        include=('turtlesim_plus', 'turtlesim_plus.*')),
)
