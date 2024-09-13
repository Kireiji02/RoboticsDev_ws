from setuptools import find_packages
from setuptools import setup

setup(
    name='temp',
    version='0.0.0',
    packages=find_packages(
        include=('temp', 'temp.*')),
)
