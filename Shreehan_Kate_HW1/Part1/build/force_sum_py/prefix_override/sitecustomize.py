import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/shreehank1906/Desktop/Shreehan_Kate_HW1/install/force_sum_py'
