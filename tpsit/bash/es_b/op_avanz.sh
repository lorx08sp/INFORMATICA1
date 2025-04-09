#!/bin/bash

# Controllo che ci sia almeno 1 argomento (oltre all'operazione)
if [ $# -lt 2 ]; then
    echo "Uso: $0 add num1 num2 [num3 ...]"
    exit 1
fi

# Controlla che il primo argomento sia 'add'
if [ "$1" != "add" ]; then
    echo "Errore: operazione non supportata. Usa: add"
    exit 2
fi

# Sposta al prossimo argomento (quello che contiene i numeri)
shift

somma=0

# Inizializzazione indice
i=1

# Ciclo while finché ci sono argomenti
while [ "$#" -gt 0 ]; do
    numero=$1

    # Controlla se è un numero valido
    if ! [[ "$numero" =~ ^-?[0-9]+$ ]]; then
        echo "Errore: '$numero' non è un numero intero valido"
        exit 3
    fi

    somma=$((somma + numero))
    shift
    i=$((i + 1))
done

echo "Risultato della somma = $somma"
