# gnuplot hetero--tcp_rmem--test-5-6--boxplot.plt
# display hetero--tcp_rmem--test-5-6--boxplot.png &
# cp hetero--tcp_rmem--test-5-6--boxplot.png /root/图片
# mv hetero--tcp_rmem--test-5-6--boxplot.png /root/图片

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "hetero--tcp_rmem--test-5-6--boxplot.png"
#set output "hetero--tcp_rmem--test-5-6--boxplot.eps"

set grid
set style fill solid 0.25 border -1
set style boxplot outliers pointtype 7
set style data boxplot

set key at 28.5,256 top Right samplen 2

set xlabel "Receive Buffer (RB) = 1536 * 2 = 3072 Bytes"
set ylabel "nc - time to transfer file <size: 3.6 MB> (seconds)"

#set title 'My Plot' font 'Arial,14';
set xtics ('2*RB' 1, '2*RB' 2, '3*RB' 3, '3*RB' 4, '4*RB' 5, '4*RB' 6, '5*RB' 7, '5*RB' 8, '6*RB' 9, '6*RB' 10, '7*RB' 11, '7*RB' 12, '8*RB' 13, '8*RB' 14, '10*RB' 15, '10*RB' 16, '14*RB' 17, '14*RB' 18, '18*RB' 19, '18*RB' 20, '50*RB' 21, '50*RB' 22, '100*RB' 23, '100*RB' 24, '150*RB' 25, '150*RB' 26, '200*RB' 27, '200*RB' 28) rotate by -75
#plot for [i=1:6] 'hetero--tcp_rmem--test-5-6--boxplot.dat' using (i):i notitle
plot 'hetero--tcp_rmem--test-5-6--boxplot.dat' \
	   using (1):1 title 'Time for MPTCP-Markov-F-xIF-MDR' lt 3 lc 'blue',\
	'' using (2):2 title 'Time for MPTCP-Markov-P-xIF-MDR' lt 3 lc 'light-cyan',\
	'' using (3):3 title '' lt 3 lc 'blue',\
	'' using (4):4 title '' lt 3 lc 'light-cyan',\
	'' using (5):5 title '' lt 3 lc 'blue',\
	'' using (6):6 title '' lt 3 lc 'light-cyan',\
	'' using (7):7 title '' lt 3 lc 'blue',\
	'' using (8):8 title '' lt 3 lc 'light-cyan',\
	'' using (9):9 title '' lt 3 lc 'blue',\
	'' using (10):10 title '' lt 3 lc 'light-cyan',\
	'' using (11):11 title '' lt 3 lc 'blue',\
	'' using (12):12 title '' lt 3 lc 'light-cyan',\
	'' using (13):13 title '' lt 3 lc 'blue',\
	'' using (14):14 title '' lt 3 lc 'light-cyan',\
	'' using (15):15 title '' lt 3 lc 'blue',\
	'' using (16):16 title '' lt 3 lc 'light-cyan',\
	'' using (17):17 title '' lt 3 lc 'blue',\
	'' using (18):18 title '' lt 3 lc 'light-cyan',\
	'' using (19):19 title '' lt 3 lc 'blue',\
	'' using (20):20 title '' lt 3 lc 'light-cyan',\
	'' using (21):21 title '' lt 3 lc 'blue',\
	'' using (22):22 title '' lt 3 lc 'light-cyan',\
	'' using (23):23 title '' lt 3 lc 'blue',\
	'' using (24):24 title '' lt 3 lc 'light-cyan',\
	'' using (25):25 title '' lt 3 lc 'blue',\
	'' using (26):26 title '' lt 3 lc 'light-cyan',\
	'' using (27):27 title '' lt 3 lc 'blue',\
	'' using (28):28 title '' lt 3 lc 'light-cyan', \
	'hetero--tcp_rmem--test-5678-odd--average.dat' using 1:2 axis x1y1 title "Average Time for MPTCP-Markov-F-xIF-MDR" with lp pt 1 lc "navy", \
	'hetero--tcp_rmem--test-5678-even--average.dat' using 1:3 axis x1y1 title "Average Time for MPTCP-Markov-P-xIF-MDR" with lp pt 3 lc "orange-red"









