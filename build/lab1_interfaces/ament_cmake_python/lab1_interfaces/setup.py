from setuptools import find_packages
from setuptools import setup

setup(
    name='lab1_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('lab1_interfaces', 'lab1_interfaces.*')),
)
