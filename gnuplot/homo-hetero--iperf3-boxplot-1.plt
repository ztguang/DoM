# gnuplot homo-hetero--iperf3-boxplot-1.plt
# display homo-hetero--iperf3-boxplot-1.png &
# cp homo-hetero--iperf3-boxplot-1.png /root/桌面
# mv homo-hetero--iperf3-boxplot-1.png /root/桌面

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "homo-hetero--iperf3-boxplot-1.png"
#set output "homo-hetero--iperf3-boxplot-1.eps"

set grid
set style fill solid 0.25 border -1
set style boxplot outliers pointtype 7
set style data boxplot

set key at 12.5,3.5 top Right samplen 2

set arrow from 0.5,1.15 to 2.5,1.15 nohead front ls 11
set arrow from 2.5,1.30 to 4.5,1.30 nohead front ls 11
set arrow from 4.5,1.15 to 6.5,1.15 nohead front ls 11
set arrow from 6.5,1.30 to 8.5,1.30 nohead front ls 11
set arrow from 8.5,1.15 to 10.5,1.15 nohead front ls 11
set arrow from 10.5,1.30 to 12.5,1.30 nohead front ls 11

set xlabel "experiments of different protocols in homogeneous/heterogeneous networks"
set ylabel "iperf3 - the amount of data transmitted in 180 seconds (MB)"

#set title 'My Plot' font 'Arial,14';
set xtics ('homo' 1, 'hetero' 2, 'homo' 3, 'hetero' 4, 'homo' 5, 'hetero' 6, 'homo' 7, 'hetero' 8, 'homo' 9, 'hetero' 10, 'homo' 11, 'hetero' 12) rotate by -25

#plot for [i=1:6] 'homo-hetero--iperf3-boxplot-1.dat' using (i):i notitle
plot 'homo-hetero--iperf3-boxplot-1.dat' \
	   using (1):1 title 'TCP-MDR' lt 3 lc 'purple',\
	'' using (2):2 title '' lt 3 lc 'purple',\
	'' using (3):3 title 'MPTCP-FullPath-MDR' lt 3 lc 'green',\
	'' using (4):4 title '' lt 3 lc 'green',\
	'' using (5):5 title 'MPTCP-FullPath-xIF-MDR' lt 3 lc 'blue',\
	'' using (6):6 title '' lt 3 lc 'blue',\
	'' using (7):7 title 'MPTCP-PartPath-xIF-MDR' lt 3 lc 'orange',\
	'' using (8):8 title '' lt 3 lc 'orange',\
	'' using (9):9 title 'MPTCP-Markov-F-xIF-MDR' lt 3 lc 'olive',\
	'' using (10):10 title '' lt 3 lc 'olive',\
	'' using (11):11 title 'MPTCP-Markov-P-xIF-MDR' lt 3 lc 'orchid',\
	'' using (12):12 title '' lt 3 lc 'orchid'


