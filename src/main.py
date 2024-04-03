import ctypes
import os
import sys

#dll path
dllpath = os.path.abspath(sys.argv[1]);

lib_dll = ctypes.CDLL(dllpath)

#we need a c-string
filepath = os.path.abspath(sys.argv[2]).encode('utf-8')
#int64_t
count = ctypes.c_int64(int(sys.argv[3]))

lib_dll.generate(ctypes.c_char_p(filepath), count)
