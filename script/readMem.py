from x64dbgpy import *
from x64dbgpy.pluginsdk.x64dbg import *
import copy
import logging
import binascii

readsize = 4
buffer = " "*readsize
DbgMemRead(0x19fa24,char_to_void(buffer), readsize)
print buffer
for i in buffer:
	print hex(ord(i))
ba = bytearray(buffer)
print int(binascii.hexlify(buffer[0:4]), 16)
s = "".join(hex(ord(i))[2:4] for i in buffer.reverse())
print s