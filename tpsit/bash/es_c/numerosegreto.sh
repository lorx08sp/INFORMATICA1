#!/bin/bash

# Genera il numero segreto tra 1 e 100
numero_segreto=$((RANDOM % 100 + 1))

# Numero massimo di tentativi
tentativi_max=10
tentativi=0

echo "Benvenuto nel gioco 'Indovina il Numero Segreto'!"
echo "Il numero segreto è tra 1 e 100. Hai $tentativi_max tentativi per indovinare."

# Ciclo di gioco
while [ $tentativi -lt $tentativi_max ]; do
    tentativi=$((tentativi + 1))
    
    # Chiedi all'utente di indovinare il numero
    echo -n "Tentativo #$tentativi: Inserisci un numero: "
    read numero_utente

    # Controlla se l'input è un numero valido
    if ! [[ "$numero_utente" =~ ^[0-9]+$ ]]; then
        echo "Per favore, inserisci un numero valido!"
        continue
    fi

    # Verifica se il numero è giusto
    if [ $numero_utente -eq $numero_segreto ]; then
        echo "Congratulazioni! Hai indovinato il numero segreto in $tentativi tentativi."
        exit 0
    elif [ $numero_utente -gt $numero_segreto ]; then
        echo "Troppo alto!"
    else
        echo "Troppo basso!"
    fi

    # Se i tentativi sono esauriti
    if [ $tentativi -ge $tentativi_max ]; then
        echo "Mi dispiace! Hai superato il numero massimo di tentativi ($tentativi_max). Il numero segreto era $numero_segreto."
        exit 1
    fi
done
