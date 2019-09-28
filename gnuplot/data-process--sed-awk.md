# Data processing and statistics of files in /root/paper-1---Data-over-MANETs---tcpdump-capture-files
# Analysis of data in files captured by M1 & M8 nodes 

### STEP 1 ###   Statistics of Packet Loss Rate of Four Links between M1 & M8 nodes ( M1<--->M8)

# cd Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-P-xIF-MDR/dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-FullPath-MDR/dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-FullPath-xIF-MDR/dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-Markov-F-xIF-MDR/dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-Markov-P-xIF-MDR/dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-PartPath-xIF-MDR/dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1448" TCP-MDR/dom-tcp-original-mdr--M1--tcpdump-eth0.txt | wc -l

# cd Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc
grep "length 1428" MPTCP-FullPath-MDR/dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-FullPath-xIF-MDR/dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-Markov-F-xIF-MDR/dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-Markov-P-xIF-MDR/dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" MPTCP-PartPath-xIF-MDR/dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" TCP-MDR/dom-tcp-original-mdr--M1--tcpdump-eth0.txt | wc -l

grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M8--tcpdump-eth0.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M8--tcpdump-eth1.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M8--tcpdump-eth2.txt | wc -l
grep "length 1428" Improved-MPTCP-Markov-F-xIF-MDR/dom-improved-mptcp-markov-f-xif-mdr--M8--tcpdump-eth3.txt | wc -l



Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc
 ├── Improved-MPTCP-Markov-F-xIF-MDR
		M1.eth0<3062>	M1.eth1<2486>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<1414>	M8.eth1<1175>	M8.eth2<0>	M8.eth3<0>
		0.4618		0.4726
 ├── Improved-MPTCP-Markov-P-xIF-MDR
		M1.eth0<3528>	M1.eth1<1992>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<1713>	M8.eth1<946>	M8.eth2<0>	M8.eth3<0>
		0.4855		0.4749
 ├── MPTCP-FullPath-MDR
		M1.eth0<5994>	M1.eth1<0>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<2731>	M8.eth1<0>	M8.eth2<0>	M8.eth3<0>
		0.4556
 ├── MPTCP-FullPath-xIF-MDR
		M1.eth0<2134>	M1.eth1<1907>	M1.eth2<1262>	M1.eth3<539>
		M8.eth0<1037>	M8.eth1<890>	M8.eth2<588>	M8.eth3<240>
		0.4859		0.4667		0.4659		0.4453
 ├── MPTCP-Markov-F-xIF-MDR
		M1.eth0<2163>	M1.eth1<1790>	M1.eth2<1123>	M1.eth3<578>
		M8.eth0<1002>	M8.eth1<841>	M8.eth2<520>	M8.eth3<262>
		0.4632		0.4698		0.463		0.4533
 ├── MPTCP-Markov-P-xIF-MDR
		M1.eth0<2145>	M1.eth1<1667>	M1.eth2<1202>	M1.eth3<738>
		M8.eth0<1026>	M8.eth1<799>	M8.eth2<564>	M8.eth3<328>
		0.4783		0.4793		0.4692		0.4444
 ├── MPTCP-PartPath-xIF-MDR
		M1.eth0<2277>	M1.eth1<1778>	M1.eth2<1049>	M1.eth3<731>
		M8.eth0<1122>	M8.eth1<880>	M8.eth2<497>	M8.eth3<339>
		0.4928		0.4949		0.4738		0.4637
 └── TCP-MDR
		M1.eth0<5338>	M1.eth1<0>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<2663>	M8.eth1<0>	M8.eth2<0>	M8.eth3<0>
		0.4989

Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc
 ├── MPTCP-FullPath-MDR
		M1.eth0<5969>	M1.eth1<0>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<2778>	M8.eth1<0>	M8.eth2<0>	M8.eth3<0>
		0.4654
 ├── MPTCP-FullPath-xIF-MDR
		M1.eth0<1510>	M1.eth1<1476>	M1.eth2<1246>	M1.eth3<1578>
		M8.eth0<732>	M8.eth1<701>	M8.eth2<563>	M8.eth3<753>
		0.4848		0.4749		0.4518		0.4772
 ├── MPTCP-Markov-F-xIF-MDR
		M1.eth0<1441>	M1.eth1<1388>	M1.eth2<1388>	M1.eth3<1352>
		M8.eth0<681>	M8.eth1<661>	M8.eth2<654>	M8.eth3<647>
		0.4726		0.4762		0.4712		0.4786
 ├── MPTCP-Markov-P-xIF-MDR
		M1.eth0<1577>	M1.eth1<1253>	M1.eth2<1190>	M1.eth3<1516>
		M8.eth0<756>	M8.eth1<574>	M8.eth2<543>	M8.eth3<729>
		0.4794		0.4581		0.4563		0.4809
 ├── MPTCP-PartPath-xIF-MDR
		M1.eth0<1709>	M1.eth1<1182>	M1.eth2<1184>	M1.eth3<1710>
		M8.eth0<842>	M8.eth1<558>	M8.eth2<585>	M8.eth3<806>
		0.4927		0.4721		0.4941		0.4713
 └── TCP-MDR
		M1.eth0<5619>	M1.eth1<0>	M1.eth2<0>	M1.eth3<0>
		M8.eth0<2585>	M8.eth1<0>	M8.eth2<0>	M8.eth3<0>
		0.46



### STEP 2 - 7 Analysis of the time stamp difference (first ack time - last seq time, i.e. The time from sending a packet to receiving its acknowledgment packet) is used to evaluate real-time performance. 

### STEP 2 ###  Statistical "length 1428" packet & "seq 1429" packet and "ack 1429" packet timestamp difference (first ack time - last seq time), used to evaluate real-time performance 

"seq 1429" 中的数字出现 7 次，说明收到了 "ack 1429" 数据包，
"seq 1429" 中的数字出现 6 次，说明被后续的 ack 数据包 确认

步骤：
提取 "length 0" (或 "IP 112.26.0.8")的 时间戳和ack值，按照ack值排序，如果有多个ack值相同，取时间戳最小的行（time1），得到文件：ack--M1--eth0.txt
提取 "length 1428" 的 时间戳和seq值，按照seq值排序，如果有多个seq值相同，取时间戳最大的行（time2），得到文件：length-seq--M1--eth0.txt
根据 ack = seq 合并文件 ack--M1--eth0.txt 和 length-seq--M1--eth0.txt，每行：time1 time2 ack/seq
time = time1 - time2
	grep "length 0" filename | grep "ack 489429"


######## Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc

cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR
grep "IP 112.26.0.8" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-improved-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR
grep "IP 112.26.0.8" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-improved-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR
grep "IP 112.26.0.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR
grep "IP 112.26.0.8" dom-tcp-original-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-tcp-original-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-tcp-original-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-tcp-original-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


######## Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc

cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR
grep "IP 112.26.0.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-fullpath-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-fullpath-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-fullpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-markov-f-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-markov-p-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR
grep "IP 112.26.0.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1428" dom-mptcp-partpath-xif-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR
grep "IP 112.26.0.8" dom-tcp-original-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth0.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth0.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth0.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth0.txt length-seq--M1--eth0.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth0.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth0.txt > time-ack-seq--M1--eth0--output.txt && sed -i '/day/d' time-ack-seq--M1--eth0--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth0--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth0--output---2-columns.txt

grep "IP 112.26.1.8" dom-tcp-original-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth1.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth1.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth1.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth1.txt length-seq--M1--eth1.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth1.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth1.txt > time-ack-seq--M1--eth1--output.txt && sed -i '/day/d' time-ack-seq--M1--eth1--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth1--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth1--output---2-columns.txt

grep "IP 112.26.2.8" dom-tcp-original-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth2.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth2.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth2.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth2.txt length-seq--M1--eth2.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth2.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth2.txt > time-ack-seq--M1--eth2--output.txt && sed -i '/day/d' time-ack-seq--M1--eth2--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth2--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth2--output---2-columns.txt

grep "IP 112.26.3.8" dom-tcp-original-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d',' -f1 | awk '!a[$2]++{print}' | sed -n '/ 1$/,$p' | sed '/ 1$/d' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > ack--M1--eth3.txt
grep "length 1448" dom-tcp-original-mdr--M1--tcpdump-eth3.txt | cut -d' ' -f1,9 | cut -d':' -f1-3 | tac | awk '!a[$2]++{print}' | sed '/ 1$/d' | tac | sort -n -k 2 -t' ' | awk '{for(i=NF;i>=1;i--){printf "%s ",$i}print s}' > length-seq--M1--eth3.txt
awk 'NR==FNR{S[$1]=$0;next}NR>FNR{print S[$1],$2}' ack--M1--eth3.txt length-seq--M1--eth3.txt | awk -F' ' '{if(NF > 2){print $0}}' | awk '$1=$1' > time-ack-seq--M1--eth3.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-ack-seq.py time-ack-seq--M1--eth3.txt > time-ack-seq--M1--eth3--output.txt && sed -i '/day/d' time-ack-seq--M1--eth3--output.txt
cut -d' ' -f2,4 time-ack-seq--M1--eth3--output.txt | sed 's/ 0:00:0/ /g' | sort > time-ack-seq--M1--eth3--output---2-columns.txt


### STEP 3 ###   Delete rows with the second column greater than 2 in the files time-ack-seq--*--output---2-columns.txt

# awk '{if($2<2) print $0}' file > file.txt

cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files

awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt
awk '{if($2<2) print $0}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt


### STEP 4 ###   The second column adds 2, 4, 6, 8, 10, 12, 14 to facilitate gnuplot mapping

cd /root/paper-1---Data-over-MANETs---tcpdump-capture-files
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+12)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+12)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+12)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+12)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+14)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+14)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+14)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+14)}' ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt

awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+2)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+4)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+6)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+8)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt
awk '{printf("%s %.6f\n",$1,$2+10)}' ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-del.txt > ./Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt


### STEP 5 ###   #Processing the first line, time changed to 00:00:00.000000
		# Processing the second and subsequent rows, the time of the first column - basetime

/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt

/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/opt/note/paper/xxu/paper/paper-1-DoM/time-sub.py /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-add.txt > /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt


### STEP 6 ###    Find the average value of a column

awk '{x+=$2} END {print "hetero TCP-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt > /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-FullPath-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-FullPath-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-FullPath-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-FullPath-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-FullPath-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-PartPath-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-PartPath-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-PartPath-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-PartPath-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-F-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-F-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-F-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-F-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-P-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-P-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-P-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero MPTCP-Markov-P-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero Improved-MPTCP-Markov-F-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero Improved-MPTCP-Markov-F-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero Improved-MPTCP-Markov-P-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "hetero Improved-MPTCP-Markov-P-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt

awk '{x+=$2} END {print "homo TCP-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-FullPath-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-FullPath-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-FullPath-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-FullPath-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-FullPath-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-PartPath-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-PartPath-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-PartPath-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-PartPath-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-F-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-F-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-F-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-F-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-P-xIF-MDR eth1 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-P-xIF-MDR eth0 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-P-xIF-MDR eth2 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt
awk '{x+=$2} END {print "homo MPTCP-Markov-P-xIF-MDR eth3 "x/NR}' /root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt >> /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/average_value.txt


### STEP 7 ###    Data used by gnuplot 

#  Files of zero size are as follows. They are not mapped.
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt

/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt

# gnuplot /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/fig-24-hetero.plt

/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc/Improved-MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt

# /opt/note/paper/xxu/paper/paper-1-DoM/gnuplot/fig-25-homo.plt

/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/TCP-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-FullPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-PartPath-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-F-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth1--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth0--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth2--output---2-columns-ok.txt
/root/paper-1---Data-over-MANETs---tcpdump-capture-files/Data-over-MANETs---tcpdump-on-8-nodes--homo---using-nc/MPTCP-Markov-P-xIF-MDR/time-ack-seq--M1--eth3--output---2-columns-ok.txt

# Data-over-MANETs---tcpdump-on-8-nodes--hetero---using-nc

TCP-MDR		eth0

MPTCP-FullPath-MDR		eth0

MPTCP-FullPath-xIF-MDR		eth0
MPTCP-FullPath-xIF-MDR		eth1
MPTCP-FullPath-xIF-MDR		eth2
MPTCP-FullPath-xIF-MDR		eth3

MPTCP-PartPath-xIF-MDR		eth0
MPTCP-PartPath-xIF-MDR		eth1
MPTCP-PartPath-xIF-MDR		eth2
MPTCP-PartPath-xIF-MDR		eth3

MPTCP-Markov-F-xIF-MDR		eth0
MPTCP-Markov-F-xIF-MDR		eth1
MPTCP-Markov-F-xIF-MDR		eth2
MPTCP-Markov-F-xIF-MDR		eth3

MPTCP-Markov-P-xIF-MDR		eth0
MPTCP-Markov-P-xIF-MDR		eth1
MPTCP-Markov-P-xIF-MDR		eth2
MPTCP-Markov-P-xIF-MDR		eth3

Improved-MPTCP-Markov-F-xIF-MDR		eth0
Improved-MPTCP-Markov-F-xIF-MDR		eth1
Improved-MPTCP-Markov-P-xIF-MDR		eth0
Improved-MPTCP-Markov-P-xIF-MDR		eth1


