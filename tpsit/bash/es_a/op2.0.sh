#!/bin/bash

# Controllo numero di argomenti
if [ $# -ne 3 ]; then
    echo "Errore: numero di argomenti non valido." >&2
    echo "Utilizzo: $0 <operazione> <numero1> <numero2>" >&2
    echo "Operazioni supportate: add sub mul div" >&2
    exit 1
fi

op=$1
num1=$2
num2=$3

# Controllo che num1 e num2 siano numeri (interi o decimali, anche negativi)
regex='^-?[0-9]+([.][0-9]+)?$'

if ! [[ "$num1" =~ $regex ]]; then
    echo "Errore: il primo operando '$num1' non è un numero valido." >&2
    exit 2
fi

if ! [[ "$num2" =~ $regex ]]; then
    echo "Errore: il secondo operando '$num2' non è un numero valido." >&2
    exit 3
fi

# Esegui l'operazione
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
        # Controllo divisione per zero
        if [ "$num2" == "0" ] || [ "$num2" == "0.0" ]; then
            echo "Errore: divisione per zero non permessa." >&2
            exit 4
        fi
        risultato=$(echo "scale=2; $num1 / $num2" | bc)
        echo "Risultato della divisione = $risultato"
        ;;
    *)
        echo "Errore: operazione '$op' non supportata." >&2
        echo "Operazioni valide: add sub mul div" >&2
        exit 5
        ;;
esac
