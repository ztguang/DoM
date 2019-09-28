# https://blog.mague.com/?p=201

# gnuplot fig-24-hetero.plt
# display fig-24-hetero.png &
# cp fig-24-hetero.png /root/图片
# mv fig-24-hetero.png /root/图片

# gnuplot /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/fig-24-hetero.plt

# gnuplot < fig-24-hetero.plt  > fig-24-hetero.png
# display fig-24-hetero.png &

# set xrange ["0:00:00":"0:03:10"]
# set xtics "0:00:00","0:0:20","0:03:10"
# set yrange [0:2]
# set ytics 0,0.2,2

# set xtics ('here' 1, '' 1.5 1, '' 2.5 1, 'there' 3, 'stop' 4)
# 它在1处显示here，在1.5和2.5处显示一个副标度，在3处显示there，在4处显示stop

set xrange [0:186]
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
set xlabel "Time (experiments in heterogeneous network)"

set key at 36,1.9 top Right samplen 2

set label 1 at  2,1.2  'TCP-MDR'
set label 2 at  2,3.2  'MPTCP-FullPath-MDR'
set label 3 at  2,5.2  'MPTCP-FullPath-xIF-MDR'
set label 4 at  2,7.2  'MPTCP-PartPath-xIF-MDR'
set label 5 at  2,9.2  'MPTCP-Markov-F-xIF-MDR'
set label 6 at  2,11.2 'MPTCP-Markov-P-xIF-MDR'

#---------------------------------------------------------------------------------------------------------- 平均值

set label 11 at 136,0.4 '0.211261 s'
set arrow from 1,0.211261 to 186,0.211261  nohead front ls 10 lt 0 lc "green"

set label 21 at 102,2.76 '0.56913 s'
set arrow from 1,2.56913 to 186,2.56913  nohead front ls 10 lt 0 lc "green"

set label 31 at 106,4.49307 '0.49307 s'
set arrow from 1,4.49307 to 106,4.49307  nohead front ls 10 lt 0 lc "green"
set label 32 at 126,4.64583 '0.64583 s'
set arrow from 1,4.64583 to 126,4.64583  nohead front ls 10 lt 0 lc "purple"
set label 33 at 166,4.21198 '0.21198 s'
set arrow from 1,4.21198 to 166,4.21198  nohead front ls 10 lt 0 lc "blue"
set label 34 at 136,4.22481 '0.22481 s'
set arrow from 1,4.22481 to 136,4.22481  nohead front ls 10 lt 0 lc "orange"

set label 41 at 106,6.31826 '0.31826 s'
set arrow from 1,6.31826 to 106,6.31826  nohead front ls 10 lt 0 lc "green"
set label 42 at 126,6.42986 '0.42986 s'
set arrow from 1,6.42986 to 126,6.42986  nohead front ls 10 lt 0 lc "purple"
set label 43 at 146,6.31504 '0.31504 s'
set arrow from 1,6.31504 to 146,6.31504  nohead front ls 10 lt 0 lc "blue"
set label 44 at 166,6.17655 '0.17655 s'
set arrow from 1,6.17655 to 166,6.17655  nohead front ls 10 lt 0 lc "orange"

set label 51 at 106,8.72357 '0.72357 s'
set arrow from 1,8.72357 to 106,8.72357  nohead front ls 10 lt 0 lc "green"
set label 52 at 126,8.62725 '0.62725 s'
set arrow from 1,8.62725 to 126,8.62725  nohead front ls 10 lt 0 lc "purple"
set label 53 at 146,8.45373 '0.45373 s'
set arrow from 1,8.45373 to 146,8.45373  nohead front ls 10 lt 0 lc "blue"
set label 54 at 166,8.32602 '0.32602 s'
set arrow from 1,8.32602 to 166,8.32602  nohead front ls 10 lt 0 lc "orange"

set label 61 at 106,10.5982 '0.5982 s'
set arrow from 1,10.5982 to 106,10.5982  nohead front ls 10 lt 0 lc "green"
set label 62 at 126,10.3935 '0.3935 s'
set arrow from 1,10.3935 to 126,10.3935  nohead front ls 10 lt 0 lc "purple"
set label 63 at 146,10.1571 '0.1571 s'
set arrow from 1,10.1571 to 146,10.1571  nohead front ls 10 lt 0 lc "blue"
set label 64 at 166,10.2759 '0.2759 s'
set arrow from 1,10.2759 to 166,10.2759  nohead front ls 10 lt 0 lc "orange"

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
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title '', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 1 lc "green" title 'eth0', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 2 lc "purple" title 'eth1', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 3 lc "blue" title 'eth2', \
     "/mnt/data/新乡学院/paper/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt" using 1:2 with lines lw 1 lt 4 lc "orange" title 'eth3'

# using 1:2 with lines lw 1 lt 3 lc "blue" title 'hosta'
# linestyle   连线风格（包括linetype，linewidth等）
# linetype     连线种类
# linewidth   连线粗细
# linecolor   连线颜色
# pointtype   点的种类
# pointsize   点的大小


