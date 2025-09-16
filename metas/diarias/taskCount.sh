#!/bin/bash

# Verifica se o arquivo foi passado como argumento
if [ "$#" -ne 2 ]; then
    echo "Uso: $0 nome_do_arquivo"
    exit 1
fi

# Extrai o dia a partir do nome do arquivo (formato: dia-mes-ano.txt)
filename=$(basename -- "$1")
day=$(echo "$filename" | cut -d'-' -f1)

# Conta quantos "X" existem no arquivo
count=$(grep -o "X" "$1" | wc -l)

# Exibe o resultado
#echo "O arquivo $filename (dia: $day) contém $count ocorrências de 'X'."

echo $day $count >> file_$2.txt

# Se necessário, você pode tratar o dado do dia aqui, por exemplo, salvando em uma variável para uso posterior.

