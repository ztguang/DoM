# gnuplot hetero--iperf3-boxplot-1.plt
# display hetero--iperf3-boxplot-1.png &
# cp hetero--iperf3-boxplot-1.png /root/桌面
# mv hetero--iperf3-boxplot-1.png /root/桌面

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "hetero--iperf3-boxplot-1.png"
#set output "hetero--iperf3-boxplot-1.eps"

set grid
set style fill solid 0.25 border -1
set style boxplot outliers pointtype 7
set style data boxplot

set key at 6.7,4.9 top Right samplen 2

set xlabel "experiments of different protocols in heterogeneous network"
set ylabel "iperf3 - the amount of data transmitted in 180 seconds (MB)"

#set title 'My Plot' font 'Arial,14';
set xtics ('1' 1, '2' 2, '3' 3, '4' 4, '5' 5, '6' 6)
#plot for [i=1:6] 'hetero--iperf3-boxplot-1.dat' using (i):i notitle
plot 'hetero--iperf3-boxplot-1.dat' using (1):1 title 'TCP-MDR' lt 3 lc 'purple',\
	'' using (2):2 title 'MPTCP-FullPath-MDR' lt 3 lc 'green',\
	'' using (3):3 title 'MPTCP-FullPath-xIF-MDR' lt 3 lc 'blue',\
	'' using (4):4 title 'MPTCP-PartPath-xIF-MDR' lt 3 lc 'orange',\
	'' using (5):5 title 'MPTCP-Markov-F-xIF-MDR' lt 3 lc 'olive',\
	'' using (6):6 title 'MPTCP-Markov-P-xIF-MDR' lt 3 lc 'orchid'
