from setuptools import find_packages
from setuptools import setup

setup(
    name='lecture4',
    version='0.0.0',
    packages=find_packages(
        include=('lecture4', 'lecture4.*')),
)
