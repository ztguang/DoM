# https://blog.mague.com/?p=201

# gnuplot fig-25-homo.plt
# display fig-25-homo.png &
# cp fig-25-homo.png /root/图片
# mv fig-25-homo.png /root/图片

# gnuplot /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/fig-25-homo.plt

# gnuplot < fig-25-homo.plt  > fig-25-homo.png
# display fig-25-homo.png &

# set xrange ["0:00:00":"0:03:10"]
# set xtics "0:00:00","0:0:20","0:03:10"
# set yrange [0:2]
# set ytics 0,0.2,2

# set xtics ('here' 1, '' 1.5 1, '' 2.5 1, 'there' 3, 'stop' 4)
# 它在1处显示here，在1.5和2.5处显示一个副标度，在3处显示there，在4处显示stop

set xrange [0:233]
set xtics 20		# 设置时间轴的间隔，以 秒 为单位， 这里设置的是一个小时
set mxtics 4		# 每两个主刻度之间被分刻度分为6份

set yrange [0:12]
#set ytics (0,2,4,6,8,10,12)
#set ytics 0,1,12
set ytics ('0s' 0,'2s' 2, '0s' 4, '2s' 6, '0s' 8, '2s' 10)
#set mytics 2

set y2range [0:12]
set y2tics ('0s' 2, '2s' 4, '0s' 6, '2s' 8, '0s' 10, '2s' 12)
#set my2tics 2

# set title "SITE.com Web Traffic"

set datafile separator " "
set terminal png size 900,800
set ylabel "The time from sending a packet to receiving its acknowledgment packet\n(M1 <---> M8)"
set xlabel "Time (experiments in homogeneous network)"

set key at 6,3.9 top Right samplen 2

set label 1 at  166,1.6  'TCP-MDR'
set label 2 at  166,3.6  'MPTCP-FullPath-MDR'
set label 3 at  166,5.6  'MPTCP-FullPath-xIF-MDR'
set label 4 at  166,7.6  'MPTCP-PartPath-xIF-MDR'
set label 5 at  166,9.6  'MPTCP-Markov-F-xIF-MDR'
set label 6 at  166,11.6 'MPTCP-Markov-P-xIF-MDR'

#---------------------------------------------------------------------------------------------------------- 平均值
set label 11 at 202,1 '0.662748 s'
set arrow from 1,0.662748 to 232,0.662748  nohead front ls 10 lt 0 lc "green"

set label 21 at 202,2.4352 '0.4352 s'
set arrow from 1,2.4352 to 202,2.4352  nohead front ls 10 lt 0 lc "green"

set label 31 at 100,4.72434 '0.72434 s'
set arrow from 1,4.72434 to 100,4.72434  nohead front ls 10 lt 0 lc "green"
set label 32 at 120,4.54212 '0.54212 s'
set arrow from 1,4.54212 to 120,4.54212  nohead front ls 10 lt 0 lc "purple"
set label 33 at 140,5.27096 '1.27096 s'
set arrow from 1,5.27096 to 140,5.27096  nohead front ls 10 lt 0 lc "blue"
set label 34 at 160,4.28319 '0.28319 s'
set arrow from 1,4.28319 to 160,4.28319  nohead front ls 10 lt 0 lc "orange"

set label 41 at 100,6.47639 '0.47639 s'
set arrow from 1,6.47639 to 100,6.47639  nohead front ls 10 lt 0 lc "green"
set label 42 at 120,6.78674 '0.78674 s'
set arrow from 1,6.78674 to 120,6.78674  nohead front ls 10 lt 0 lc "purple"
set label 43 at 146,6.7637 '0.7637 s'
set arrow from 1,6.7637 to 146,6.7637  nohead front ls 10 lt 0 lc "blue"
set label 44 at 160,6.41766 '0.41766 s'
set arrow from 1,6.41766 to 160,6.41766  nohead front ls 10 lt 0 lc "orange"

set label 51 at 100,8.58101 '0.58101 s'
set arrow from 1,8.58101 to 100,8.58101  nohead front ls 10 lt 0 lc "green"
set label 52 at 120,8.72521 '0.72521 s'
set arrow from 1,8.72521 to 120,8.72521  nohead front ls 10 lt 0 lc "purple"
set label 53 at 176,8.44354 '0.44354 s'
set arrow from 1,8.44354 to 176,8.44354  nohead front ls 10 lt 0 lc "blue"
set label 54 at 146,8.45102 '0.45102 s'
set arrow from 1,8.45102 to 146,8.45102  nohead front ls 10 lt 0 lc "orange"

set label 61 at 100,10.4938 '0.4938 s'
set arrow from 1,10.4938 to 100,10.4938  nohead front ls 10 lt 0 lc "green"
set label 62 at 120,11.0486 '1.0486 s'
set arrow from 1,11.0486 to 120,11.0486  nohead front ls 10 lt 0 lc "purple"
set label 63 at 146,11.1805 '1.1805 s'
set arrow from 1,11.1805 to 146,11.1805  nohead front ls 10 lt 0 lc "blue"
set label 64 at 160,10.0818 '0.0818 s'
set arrow from 1,10.0818 to 160,10.0818  nohead front ls 10 lt 0 lc "orange"
#----------------------------------------------------------------------------------------------------------


# 2011-01-01-09:00:01.123456
# set timefmt "%Y-%m-%d-%H:%M:%.6S"

set xdata time			# 设置X轴时间轴
set timefmt "%H:%M:%S"		# 数据格式，可以用微秒精度读取数据，如 21:14:19.890558，正确绘制
set xtics format "%M:%S"		# 显示格式
#set format x "%H:%M:%.6S"		# 显示格式
set key left top
set grid

plot \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title 'eth0', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title 'eth1', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title 'eth2', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title 'eth3'

# using 1:2 with lines lw 1 lt 3 lc "blue" title 'hosta'
# linestyle   连线风格（包括linetype，linewidth等）
# linetype     连线种类
# linewidth   连线粗细
# linecolor   连线颜色
# pointtype   点的种类
# pointsize   点的大小


