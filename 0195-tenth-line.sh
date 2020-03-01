#第一种
sed -n '10p' file.txt;
#第二种
awk "NR==10" file.txt;
#第三种
tail -n +10 file.txt | head -1