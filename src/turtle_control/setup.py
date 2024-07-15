from setuptools import find_packages, setup

package_name = 'turtle_control'

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
    maintainer='eypan',
    maintainer_email='eyuphandurmus41@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "client= turtle_control.TurtleClientNode:main",
            "server= turtle_control.TurtleServerNode:main",
            "followClient = turtle_control.TFollowClient:main",
            "followServer = turtle_control.TFollowServer:main",
        ],
    },
)
