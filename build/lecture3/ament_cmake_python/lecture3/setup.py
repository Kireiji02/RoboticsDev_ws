from setuptools import find_packages
from setuptools import setup

setup(
    name='lecture3',
    version='0.0.0',
    packages=find_packages(
        include=('lecture3', 'lecture3.*')),
)
