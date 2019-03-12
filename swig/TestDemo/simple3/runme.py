#coding:utf-8
# file: runme.py


import example

print "factorial", example.factorial(3)

s = "1"

print "DbgMemRead", example.DbgMemRead(3,s,5) #输出4,因为typemap时+1
print s #输出A 猜测是因为C层确实写了5个A，但是python层有对buffer大小的判断，仅输出了一个A

print "DbgMemRead2", example.DbgMemRead2(3,s,5) #输出4,因为typemap时+1
print s #输出A 猜测是因为C层确实写了5个A，但是python层有对buffer大小的判断，仅输出了一个A

