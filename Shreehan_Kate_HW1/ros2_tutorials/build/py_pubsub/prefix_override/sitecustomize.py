import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/shreehank1906/Desktop/ros2_ws/install/py_pubsub'
