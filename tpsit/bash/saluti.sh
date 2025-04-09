nome=""
orario=""
minuti=""
echo "inserisci il tuo nome"
read nome
echo "inserisci l'ora"
read orario
echo "inserisci i minuti"
read minuti
if [ $orario -gt 12 ];
then
    if [ $orario -gt 19 ];
    then
        echo "Buonasera $nome! Sono le $orario:$minuti. Spero sia stata una bella giornata!"
    else
         echo "Buonpomeriggio $nome! Sono le $orario:$minuti. Spero che oggi sia una bella giornata!" 
    fi
elif [ $orario -lt 12 ]; 
then
    echo "Buongiorno $nome! Sono le $orario:$minuti. Spero che sia una bella giornata!"
fi
    
   
