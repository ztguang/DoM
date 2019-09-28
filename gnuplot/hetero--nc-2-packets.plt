# gnuplot hetero--nc-2-packets.plt
# display hetero--nc-2-packets.png &
# cp hetero--nc-2-packets.png /root/桌面
# mv hetero--nc-2-packets.png /root/桌面

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "hetero--nc-2-packets.png"
#set output "hetero--nc-2-packets.eps"

set xrange [0:9]
set xtics 0,1,9
set yrange [0:9000]
set ytics 0,500,9000

set xtics ('' 0, 'M1' 1, 'M2' 2, 'M3' 3, 'M4' 4, 'M5' 5, 'M6' 6, 'M7' 7, 'M8' 8, '' 9)

set grid
#set grid xtics
#set style data histograms
#set style fill solid 1.00 border -1

# set key box reverse top Left Right samplen 2 spacing 1.2
set key at 8.9,8900 top Right samplen 2

set arrow from 0.5,200 to 1.5,200 nohead front ls 11
set arrow from 1.5,400 to 4.5,400 nohead front ls 11
set arrow from 4.5,200 to 7.5,200 nohead front ls 11
set arrow from 7.5,400 to 8.5,400 nohead front ls 11

set xlabel "Nodes M1 - M8 in homogeneous network"
set ylabel "nc - the number of packets captured on M1-M8"
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

#plot 'hetero--nc-2-packets.dat' using 1:2 title "The Average RTT of ping" with lines ls 1 lw 1 lc "red"

#plot 'hetero--nc-2-packets.dat' using 1:2 axis x1y1 title "Average RTT" with linespoints pointtype 2, \
#     'hetero--nc-2-packets.dat' using 1:2 axis x1y2 title "CPU Utilization" with linespoints pointtype 3

#set arrow from 1,107.33 to 30,107.33	nohead front ls 10 lt 0 lc "purple"
#set arrow from 1,92.93 to 30,92.93	nohead front ls 11 lt 0 lc "green"
#set arrow from 1,50.07 to 30,50.07	nohead front ls 12 lt 0 lc "blue"
#set arrow from 1,51.33 to 30,51.33	nohead front ls 13 lt 0 lc "orange"
#set arrow from 1,49.1 to 30,49.1	nohead front ls 14 lt 0 lc "olive"
#set arrow from 1,47.53 to 30,47.53	nohead front ls 15 lt 0 lc "orchid"

set label 1 at  1, 2700 '2586'
set arrow from 1,2586 to 8,2586	nohead front ls 10 lt 0 lc "red"

# using 1:2 ＝ 使用 *.dat 文件中的 1，2 列作为 x，y 作图
plot 'hetero--nc-2-packets.dat' using 1:2 axis x1y1 title "TCP-MDR" with lp pt 1 lc "purple", \
     'hetero--nc-2-packets.dat' using 1:3 axis x1y1 title "MPTCP-FullPath-MDR" with lp pt 2 lc "green", \
     'hetero--nc-2-packets.dat' using 1:4 axis x1y1 title "MPTCP-FullPath-xIF-MDR" with lp pt 3 lc "blue", \
     'hetero--nc-2-packets.dat' using 1:5 axis x1y1 title "MPTCP-PartPath-xIF-MDR" with lp pt 4 lc "orange", \
     'hetero--nc-2-packets.dat' using 1:6 axis x1y1 title "MPTCP-Markov-F-xIF-MDR" with lp pt 5 lc "olive", \
     'hetero--nc-2-packets.dat' using 1:7 axis x1y1 title "MPTCP-Markov-P-xIF-MDR" with lp pt 6 lc "orchid"

#----------------------------------------- no use
#     'hetero--nc-2-packets.dat' using 2:xtic(10) title "aaa" fs pattern 4, \
#     'hetero--nc-2-packets.dat' using 3:xtic(10) title "bbb" fs pattern 1, \
#     'hetero--nc-2-packets.dat' using 4:xtic(10) title "ccc" fs pattern 5

#     'hetero--nc-2-packets.dat' using 2:xtic(1) title "aaa", '' using 3 title "bbb", '' using 4 title "ccc"
#     'hetero--nc-2-packets.dat' u 2:xtic(1) ti columnheader(2)  fs pattern 4,\
#     'hetero--nc-2-packets.dat' u 3:xtic(1) ti columnheader(3)  fs pattern 3,\
#     'hetero--nc-2-packets.dat' u 4:xtic(1) ti columnheader(4)  fs pattern 2
#-----------------------------------------

