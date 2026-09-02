from setuptools import find_packages, setup

package_name = 'force_sum_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='shreehank1906',
    maintainer_email='skate@wpi.edu',
    description='Server and client nodes for HW1 force summation service',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'server = force_sum_py.server:main',
            'client = force_sum_py.client:main'
        ],
    },
)