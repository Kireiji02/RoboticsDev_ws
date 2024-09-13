from setuptools import find_packages
from setuptools import setup

setup(
    name='lecture3_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('lecture3_interfaces', 'lecture3_interfaces.*')),
)
