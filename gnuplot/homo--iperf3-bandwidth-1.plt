# gnuplot homo--iperf3-bandwidth-1.plt
# display homo--iperf3-bandwidth-1.png &
# cp homo--iperf3-bandwidth-1.png /root/图片
# mv homo--iperf3-bandwidth-1.png /root/图片

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "homo--iperf3-bandwidth-1.png"
#set output "homo--iperf3-bandwidth-1.eps"

set xrange [1:15]
set xtics 1,1,15
set yrange [100:380]
set ytics 100,20,380

#set grid
set grid xtics
#set style data histograms
#set style fill solid 1.00 border -1

# set key box reverse top Left Right samplen 2 spacing 1.2
set key at 10,270 top Right samplen 2

set xlabel "times (experiments in homogeneous network)"
set ylabel "iperf3 - transmission speed (KB/s)"
#set y2label "CPU Utilization of NS3 Thread-1/Thread-2 (%)"

#----------------------------------------- no use
#  Total Average Speed - TAS-TCP-MDR
#set label 'TAS-TCP-MDR' at 1.5,6.5 left front tc ls 11
#set arrow from 1.5,6.4 to 3,4 nohead front ls 11
#set label 'TAS-MPTCP-MDR' at 3,5.8 left front tc ls 11
#set arrow from 3,5.7 to 4,3 nohead front ls 11
#set label 'TAS-Improved-MPTCP-MDR' at 4.5,5 left front tc ls 11
#set arrow from 4.5,4.9 to 6,3 nohead front ls 11
#-----------------------------------------

#plot 'homo--iperf3-bandwidth-1.dat' using 1:2 title "The Average RTT of ping" with lines ls 1 lw 1 lc "red"

#plot 'homo--iperf3-bandwidth-1.dat' using 1:2 axis x1y1 title "Average RTT" with linespoints pointtype 2, \
#     'homo--iperf3-bandwidth-1.dat' using 1:2 axis x1y2 title "CPU Utilization" with linespoints pointtype 3

set arrow from 1,138 to 15,138		nohead front ls 10 lt 0 lc "purple"
set arrow from 1,128.3 to 15,128.3	nohead front ls 11 lt 0 lc "green"
set arrow from 1,340 to 15,340		nohead front ls 12 lt 0 lc "blue"
set arrow from 1,313.8 to 15,313.8	nohead front ls 13 lt 0 lc "orange"
set arrow from 1,347.4 to 15,347.4		nohead front ls 14 lt 0 lc "olive"
set arrow from 1,361.6 to 15,361.6		nohead front ls 15 lt 0 lc "orchid"

# using 1:2 ＝ 使用 *.dat 文件中的 1，2 列作为 x，y 作图
plot 'homo--iperf3-bandwidth-1.dat' using 1:2 axis x1y1 title "TCP-MDR" with lp pt 1 lc "purple", \
     'homo--iperf3-bandwidth-1.dat' using 1:3 axis x1y1 title "MPTCP-FullPath-MDR" with lp pt 2 lc "green", \
     'homo--iperf3-bandwidth-1.dat' using 1:4 axis x1y1 title "MPTCP-FullPath-xIF-MDR" with lp pt 3 lc "blue", \
     'homo--iperf3-bandwidth-1.dat' using 1:5 axis x1y1 title "MPTCP-PartPath-xIF-MDR" with lp pt 4 lc "orange", \
     'homo--iperf3-bandwidth-1.dat' using 1:6 axis x1y1 title "MPTCP-Markov-F-xIF-MDR" with lp pt 5 lc "olive", \
     'homo--iperf3-bandwidth-1.dat' using 1:7 axis x1y1 title "MPTCP-Markov-P-xIF-MDR" with lp pt 6 lc "orchid"

#----------------------------------------- no use
#     'homo--iperf3-bandwidth-1.dat' using 2:xtic(10) title "aaa" fs pattern 4, \
#     'homo--iperf3-bandwidth-1.dat' using 3:xtic(10) title "bbb" fs pattern 1, \
#     'homo--iperf3-bandwidth-1.dat' using 4:xtic(10) title "ccc" fs pattern 5

#     'homo--iperf3-bandwidth-1.dat' using 2:xtic(1) title "aaa", '' using 3 title "bbb", '' using 4 title "ccc"
#     'homo--iperf3-bandwidth-1.dat' u 2:xtic(1) ti columnheader(2)  fs pattern 4,\
#     'homo--iperf3-bandwidth-1.dat' u 3:xtic(1) ti columnheader(3)  fs pattern 3,\
#     'homo--iperf3-bandwidth-1.dat' u 4:xtic(1) ti columnheader(4)  fs pattern 2
#-----------------------------------------

