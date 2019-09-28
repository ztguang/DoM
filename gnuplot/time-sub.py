#!/usr/bin/python3

# /opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/time-ack-seq--M1--eth0--output---2-columns.txt

# import datetime
# oldtime=datetime.datetime.now()
# print (oldtime)
# x=1
# while x<10000:
#     x=x+1
# newtime=datetime.datetime.now()
# print (newtime)
# print ('相差：%s'%(newtime-oldtime))
# print ('相差：%s微秒'%(newtime-oldtime).microseconds)
# print ('相差：%s秒'%(newtime-oldtime).seconds)

# 2019-09-24 19:06:04.629181
# 2019-09-24 19:06:04.630438
# 相差：0:00:00.001257
# 相差：1257微秒
# 相差：0秒

import sys
import datetime

with open(sys.argv[1],"r") as f:

	first=0

	for l in f.readlines():
		#处理第一行，时间修改为 00:00:00.000000
		if first==0:
			first=1
			ls=l.strip('\n').split(' ')		# strip('\n')		去掉行尾'\n'
			basetime=datetime.datetime.strptime(ls[0], "%H:%M:%S.%f")

		#处理第二行以及以后行，第一列的时间 - basetime
		ls=l.strip('\n').split(' ')			# strip('\n')		去掉行尾'\n'
		print (datetime.datetime.strptime(ls[0], "%H:%M:%S.%f") - basetime, ls[1])



