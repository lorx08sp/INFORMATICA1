#!/bin/bash

# Controlla che sia stato passato un argomento
if [ $# -eq 0 ]; then
    echo "Utilizzo: $0 <altezza_punta>"
    exit 1
fi

altezza=$1

# Controlla che sia un numero positivo
if ! [[ "$altezza" =~ ^[0-9]+$ ]] || [ "$altezza" -eq 0 ]; then
    echo "Inserisci un numero intero positivo"
    exit 1
fi

# Disegna la punta dell'albero (triangolo centrato)
for (( i=1; i<=altezza; i++ ))
do
    spazi=$((altezza - i))
    stelle=$((2*i - 1))
    
    printf "%*s" "$spazi" ""       # stampa spazi
    for (( j=1; j<=stelle; j++ ))
    do
        printf "*"
    done
    echo
done

# Disegna il tronco (1 o 2 righe, altezza fissa)
tronco_altezza=2
tronco_larghezza=3
spazi_tronco=$((altezza - tronco_larghezza / 2 - 1))

for (( i=1; i<=tronco_altezza; i++ ))
do
    printf "%*s" "$spazi_tronco" ""   # spazi per centrare il tronco
    for (( j=1; j<=tronco_larghezza; j++ ))
    do
        printf "|"
    done
    echo
done
