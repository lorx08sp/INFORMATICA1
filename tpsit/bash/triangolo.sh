#!/bin/bash

# Controlla che sia stato passato un argomento
if [ $# -eq 0 ]; then
    echo "Utilizzo: $0 <numero_di_righe>"
    exit 1
fi

righe=$1

# Verifica che l'argomento sia un numero positivo
if ! [[ "$righe" =~ ^[0-9]+$ ]] || [ "$righe" -eq 0 ]; then
    echo "Inserisci un numero intero positivo."
    exit 1
fi

# Costruisce il triangolo
for (( i=1; i<=righe; i++ ))
do
    for (( j=1; j<=i; j++ ))
    do
        echo -n "*"
    done
    echo
done
