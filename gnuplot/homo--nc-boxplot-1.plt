# gnuplot homo--nc-boxplot-1.plt
# display homo--nc-boxplot-1.png &
# cp homo--nc-boxplot-1.png /root/桌面
# mv homo--nc-boxplot-1.png /root/桌面

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "homo--nc-boxplot-1.png"
#set output "homo--nc-boxplot-1.eps"

set grid
set style fill solid 0.25 border -1
set style boxplot outliers pointtype 7
set style data boxplot

set xlabel "experiments of different protocols in homogeneous network"
set ylabel "nc - time to transfer file <bgpd, size: 1849600> (seconds)"

#set title 'My Plot' font 'Arial,14';
set xtics ('1' 1, '2' 2, '3' 3, '4' 4, '5' 5, '6' 6)
#plot for [i=1:4] 'homo--nc-boxplot-1.dat' using (i):i notitle
plot 'homo--nc-boxplot-1.dat' using (1):1 title 'TCP-MDR' lt 3 lc 'purple',\
	'' using (2):2 title 'MPTCP-FullPath-MDR' lt 3 lc 'green',\
	'' using (3):3 title 'MPTCP-FullPath-xIF-MDR' lt 3 lc 'blue',\
	'' using (4):4 title 'MPTCP-PartPath-xIF-MDR' lt 3 lc 'orange',\
	'' using (5):5 title 'MPTCP-Markov-F-xIF-MDR' lt 3 lc 'olive',\
	'' using (6):6 title 'MPTCP-Markov-P-xIF-MDR' lt 3 lc 'orchid'
