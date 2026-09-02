from setuptools import find_packages
from setuptools import setup

setup(
    name='force_sum_interface',
    version='0.0.0',
    packages=find_packages(
        include=('force_sum_interface', 'force_sum_interface.*')),
)
