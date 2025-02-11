#!/bin/bash
clear 
ROSSO="\033[0;31m"
RESET="\033[0m"
CYAN="\033[0;36m"
echo "Benvenuto nel menù"
echo "inserisci il tuo nome:"
echo ""
read nome
echo ""
echo "${ROSSO}============ Menù ============$RESET"
echo ""
echo "1) registra la data di nascita"
echo "2) mostra il nome utente"
echo "3) esci"
echo ""
read -p "inserisci un'opzione: " opzione

if [ "$opzione" -eq 1 ]
then
    read -p "inserisci l'anno di nascita: " anno
    if [ "$anno" -lt 2025 ]
    then
        read -p "inserisci il mese (in numero): " mese
        read -p "inserisci il giorno: " giorno
    fi
echo "la tua data di nascita è: $giorno/$mese/$anno"
elif [ "$opzione" -eq 2 ]
then 
    echo "il tuo nome utente è: $nome"
elif [ "$opzione" -eq 3 ]
then 
    echo "rogramma terminato. ${CYAN}h${ROSSO}a${CYAN}m${ROSSO}z${CYAN}a ${ROSSO}k${CYAN}e${ROSSO}b${CYAN}a${ROSSO}b$RESET"
else   
    echo "opzione non valida"
fi