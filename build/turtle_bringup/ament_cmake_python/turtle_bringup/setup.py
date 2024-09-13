from setuptools import find_packages
from setuptools import setup

setup(
    name='turtle_bringup',
    version='0.0.0',
    packages=find_packages(
        include=('turtle_bringup', 'turtle_bringup.*')),
)
