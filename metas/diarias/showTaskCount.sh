rm file_$1.txt
rm rendimento_$1.png
for i in $(ls ./$1/*); do ./taskCount.sh $i $1 ; done


sed -i "s/file_/file_$1/g" plot.gp
sed -i "s/rendimento_/rendimento_$1/g" plot.gp

gnuplot plot.gp
xdg-open rendimento_$1.png

sed -i "s/file_$1/file_/g" plot.gp
sed -i "s/rendimento_$1/rendimento_/g" plot.gp


