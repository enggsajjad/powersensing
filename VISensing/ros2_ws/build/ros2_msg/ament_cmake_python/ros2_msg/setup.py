from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_msg',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_msg', 'ros2_msg.*')),
)
