from setuptools import find_packages
from setuptools import setup

setup(
    name='lecture2',
    version='0.0.0',
    packages=find_packages(
        include=('lecture2', 'lecture2.*')),
)
