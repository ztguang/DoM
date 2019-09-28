#!/usr/bin/python3

# /opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt

import sys
import datetime

with open(sys.argv[1],"r") as f:
	for l in f.readlines():
		sum = 0
		ls=l.strip('\n').split(' ')			# strip('\n')		去掉行尾'\n'
		#sum += int(ls[1])+int(ls[2])
		#print(sum)
		#print (datetime.datetime.strptime(ls[1], "%Y-%m-%d %H:%M:%S.%f") - datetime.datetime.strptime(ls[2], "%Y-%m-%d %H:%M:%S.%f")).total_seconds()
		#print (ls)		#['1429', '08:03:03.562432', '08:03:03.363234']
		print (ls[0], ls[1], ls[2], datetime.datetime.strptime(ls[1], "%H:%M:%S.%f") - datetime.datetime.strptime(ls[2], "%H:%M:%S.%f"))
