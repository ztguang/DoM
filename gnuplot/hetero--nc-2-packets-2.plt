# gnuplot hetero--nc-2-packets-2.plt
# display hetero--nc-2-packets-2.png &
# cp hetero--nc-2-packets-2.png /root/桌面
# mv hetero--nc-2-packets-2.png /root/桌面

#set terminal png truecolor
set term png font '/usr/share/fonts/msttcore/times.ttf,13'
set output "hetero--nc-2-packets-2.png"
#set output "hetero--nc-2-packets-2.eps"

set yrange [0:260]
set ylabel "redundant packets received by M8\n(the number of packets received by M8 - 2586)"
set xlabel "experiments of different protocols in heterogeneous network"
unset key

#set grid
set grid ytics
#set style data histograms
#set style fill solid 1.00 border -1

unset tics
set ytics 0,20,260

set xtics ('TCP-MDR' 5, 'MPTCP-FullPath-MDR' 4, 'MPTCP-FullPath-xIF-MDR' 3, 'MPTCP-PartPath-xIF-MDR' 2, 'MPTCP-Markov-F-xIF-MDR' 1, 'MPTCP-Markov-P-xIF-MDR' 0) rotate by -25

#set xtics center offset 0,-1
set style histogram clustered gap 2   #//gap 2表示裂隙宽等于矩形宽度的2倍
set style fill solid border -1   #//fill solid表示完全填充柱体，后面跟0-1的参数，1表示完全填充，border 表示柱体的边线颜色，-1表示黑色。这里还可以加参数pattern
plot 'hetero--nc-2-packets-2.dat' using 1 with histogram ls 3
