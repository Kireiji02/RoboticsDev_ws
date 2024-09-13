from setuptools import find_packages
from setuptools import setup

setup(
    name='lab1',
    version='0.0.0',
    packages=find_packages(
        include=('lab1', 'lab1.*')),
)
