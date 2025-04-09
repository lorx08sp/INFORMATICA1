#!/bin/bash

# Controllo numero di argomenti
if [ $# -ne 3 ]; then
    echo "Utilizzo: $0 <operazione> <num1> <num2>"
    echo "Operazioni disponibili: add sub mul div"
    exit 1
fi

op=$1
num1=$2
num2=$3

# Controllo che num1 e num2 siano numeri
if ! [[ "$num1" =~ ^-?[0-9]+(\.[0-9]+)?$ ]] || ! [[ "$num2" =~ ^-?[0-9]+(\.[0-9]+)?$ ]]; then
    echo "Errore: num1 e num2 devono essere numeri"
    exit 1
fi

case $op in
    add)
        risultato=$(echo "$num1 + $num2" | bc)
        echo "Risultato della somma = $risultato"
        ;;
    sub)
        risultato=$(echo "$num1 - $num2" | bc)
        echo "Risultato della sottrazione = $risultato"
        ;;
    mul)
        risultato=$(echo "$num1 * $num2" | bc)
        echo "Risultato della moltiplicazione = $risultato"
        ;;
    div)
        if [ "$num2" == "0" ]; then
            echo "Errore: divisione per zero"
            exit 1
        fi
        risultato=$(echo "scale=2; $num1 / $num2" | bc)
        echo "Risultato della divisione = $risultato"
        ;;
    *)
        echo "Operazione non riconosciuta. Usa: add, sub, mul, div"
        exit 1
        ;;
esac
