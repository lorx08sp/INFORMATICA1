password1 = ciaobello
password2 = nevebianca
password3 = tiscatusca
echo ""
echo "Ciao! inserisci il numero del nome utente."
echo "utenti registrati:"
echo ""
echo "1) lorenzo.trudu"
echo "2) andrea.dipre"
echo "3) topolino
read nome_utente
if [ $nome_utente -eq 1 ]
then 
    echo "inserisci la password:  "
    read nuova_password
    if [ $nuova_password -eq $password1 ]
    then
        echo "benvenuto Lorenzo! Accesso effettuato"
        fi
    else
    then
        echo "password errata"
        fi
elif [ $nome_utente -eq 2 ]
then 
    echo "inserisci la password:  "
    read nuova_password
    if [ $nuova_password -eq $password2 ]
    then
        echo "benvenuto Andrea! Accesso effettuato"
        fi
elif [ $nome_utente]

