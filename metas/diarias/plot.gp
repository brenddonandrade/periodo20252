set terminal png size 800,600
set output 'rendimento_.png'

set title "Rendimento Mensal"
set xlabel "Dias"
set ylabel "Tasks"

set style data histograms
set style fill solid border -1

set boxwidth 0.5

# Inicia o eixo Y em 0 e ajusta o máximo para um valor um pouco maior que o máximo dos dados
set yrange [0:12] # O asterisco permite que o máximo seja ajustado automaticamente
set xrange [-1:*] # Permite um pequeno espaçamento nas laterais para um visual mais fluido

#set xtics nomirror
set grid ytics
plot 'file_.txt' using 2:xtic(1) with boxes title "Tasks"

