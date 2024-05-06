from setuptools import find_packages
from setuptools import setup

setup(
    name='rp2_inter',
    version='0.0.0',
    packages=find_packages(
        include=('rp2_inter', 'rp2_inter.*')),
)
