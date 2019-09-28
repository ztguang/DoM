# gnuplot hetero--tcp_rmem--test-9-7-10--boxplot.plt
# display hetero--tcp_rmem--test-9-7-10--boxplot.png &
# /bin/cp hetero--tcp_rmem--test-9-7-10--boxplot.png /root/图片
# /bin/mv hetero--tcp_rmem--test-9-7-10--boxplot.png /root/图片

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "hetero--tcp_rmem--test-9-7-10--boxplot.png"
#set output "hetero--tcp_rmem--test-9-7-10--boxplot.eps"

set grid
set style fill solid 0.25 border -1
set style boxplot outliers pointtype 7
set style data boxplot

set yrange [80:320]
set ytics 80,20,320

set key at 42.5,317 top Right samplen 2

set arrow from 0.5,86 to 3.5,86 nohead front ls 11
set arrow from 3.5,90 to 6.5,90 nohead front ls 11
set arrow from 6.5,86 to 9.5,86 nohead front ls 11
set arrow from 9.5,90 to 12.5,90 nohead front ls 11
set arrow from 12.5,86 to 15.5,86 nohead front ls 11
set arrow from 15.5,90 to 18.5,90 nohead front ls 11
set arrow from 18.5,86 to 21.5,86 nohead front ls 11
set arrow from 21.5,90 to 24.5,90 nohead front ls 11
set arrow from 24.5,86 to 27.5,86 nohead front ls 11
set arrow from 27.5,90 to 30.5,90 nohead front ls 11
set arrow from 30.5,86 to 33.5,86 nohead front ls 11
set arrow from 33.5,90 to 36.5,90 nohead front ls 11
set arrow from 36.5,86 to 39.5,86 nohead front ls 11
set arrow from 39.5,90 to 42.5,90 nohead front ls 11


set xlabel "Receive Buffer (RB) = 1536 * 2 = 3072 Bytes"
set ylabel "nc - time to transfer file <size: 3.6 MB> (seconds)"

#set title 'My Plot' font 'Arial,14';
set xtics ('2*RB' 1, '' 2, '' 3, '3*RB' 4, '' 5, '' 6, '4*RB' 7, '' 8, '' 9, '5*RB' 10, '' 11, '' 12, '6*RB' 13, '' 14, '' 15, '7*RB' 16, '' 17, '' 18, '8*RB' 19, '' 20, '' 21, '10*RB' 22, '' 23, '' 24, '14*RB' 25, '' 26, '' 27, '18*RB' 28, '' 29, '' 30, '50*RB' 31, '' 32, '' 33, '100*RB' 34, '' 35, '' 36, '150*RB' 37, '' 38, '' 39, '200*RB' 40, '' 41, '' 42) rotate by -45
#plot for [i=1:6] 'hetero--tcp_rmem--test-9-7-10--boxplot.dat' using (i):i notitle
plot 'hetero--tcp_rmem--test-9-7-10--boxplot.dat' \
	   using (1):1 title 'Time for Partflow-MPTCP-Markov-F-xIF-MDR (100ms)' lt 3 lc 'blue',\
	'' using (2):2 title 'Time for Partflow-MPTCP-Markov-F-xIF-MDR (200ms)' lt 3 lc 'light-cyan',\
	'' using (3):3 title 'Time for Partflow-MPTCP-Markov-F-xIF-MDR (300ms)' lt 3 lc 'green',\
	'' using (4):4 title '' lt 3 lc 'blue',\
	'' using (5):5 title '' lt 3 lc 'light-cyan',\
	'' using (6):6 title '' lt 3 lc 'green',\
	'' using (7):7 title '' lt 3 lc 'blue',\
	'' using (8):8 title '' lt 3 lc 'light-cyan',\
	'' using (9):9 title '' lt 3 lc 'green',\
	'' using (10):10 title '' lt 3 lc 'blue',\
	'' using (11):11 title '' lt 3 lc 'light-cyan',\
	'' using (12):12 title '' lt 3 lc 'green',\
	'' using (13):13 title '' lt 3 lc 'blue',\
	'' using (14):14 title '' lt 3 lc 'light-cyan',\
	'' using (15):15 title '' lt 3 lc 'green',\
	'' using (16):16 title '' lt 3 lc 'blue',\
	'' using (17):17 title '' lt 3 lc 'light-cyan',\
	'' using (18):18 title '' lt 3 lc 'green',\
	'' using (19):19 title '' lt 3 lc 'blue',\
	'' using (20):20 title '' lt 3 lc 'light-cyan',\
	'' using (21):21 title '' lt 3 lc 'green',\
	'' using (22):22 title '' lt 3 lc 'blue',\
	'' using (23):23 title '' lt 3 lc 'light-cyan',\
	'' using (24):24 title '' lt 3 lc 'green',\
	'' using (25):25 title '' lt 3 lc 'blue',\
	'' using (26):26 title '' lt 3 lc 'light-cyan',\
	'' using (27):27 title '' lt 3 lc 'green',\
	'' using (28):28 title '' lt 3 lc 'blue', \
	'' using (29):29 title '' lt 3 lc 'light-cyan', \
	'' using (30):30 title '' lt 3 lc 'green', \
	'' using (31):31 title '' lt 3 lc 'blue', \
	'' using (32):32 title '' lt 3 lc 'light-cyan', \
	'' using (33):33 title '' lt 3 lc 'green', \
	'' using (34):34 title '' lt 3 lc 'blue', \
	'' using (35):35 title '' lt 3 lc 'light-cyan', \
	'' using (36):36 title '' lt 3 lc 'green', \
	'' using (37):37 title '' lt 3 lc 'blue', \
	'' using (38):38 title '' lt 3 lc 'light-cyan', \
	'' using (39):39 title '' lt 3 lc 'green', \
	'' using (40):40 title '' lt 3 lc 'blue', \
	'' using (41):41 title '' lt 3 lc 'light-cyan', \
	'' using (42):42 title '' lt 3 lc 'green', \
	'hetero--tcp_rmem--test-9-100ms--average.dat' using 1:2 axis x1y1 title "Average Time for Partflow-MPTCP-Markov-F-xIF-MDR (100ms)" with lp pt 1 lc "blue", \
	'hetero--tcp_rmem--test-7-200ms--average.dat' using 1:2 axis x1y1 title "Average Time for Partflow-MPTCP-Markov-F-xIF-MDR (200ms)" with lp pt 1 lc "orange-red", \
	'hetero--tcp_rmem--test-10-300ms--average.dat' using 1:2 axis x1y1 title "Average Time for Partflow-MPTCP-Markov-F-xIF-MDR (300ms)" with lp pt 3 lc "forest-green"
