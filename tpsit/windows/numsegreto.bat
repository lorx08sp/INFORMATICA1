@echo off
color 0a
title Indovina il Numero Segreto

rem Imposta il numero massimo di tentativi
set max_tentativi=10
set /a tentativi=0

rem Genera un numero casuale tra 1 e 100
set /a numero_segreto=%random% %% 100 + 1

:inizio
set /p input=Indovina il numero segreto (1-100): 
set /a tentativi+=1

rem Controlla se il numero è corretto
if "%input%"=="%numero_segreto%" goto indovinato
if %tentativi% GEQ %max_tentativi% goto fallito

if %input% LSS %numero_segreto% (
    echo Troppo basso!
) else (
    echo Troppo alto!
)
goto inizio

:indovinato
echo Complimenti! Hai indovinato il numero in %tentativi% tentativi!
goto fine

:fallito
echo Hai superato il numero massimo di %max_tentativi% tentativi.
echo Il numero segreto era: %numero_segreto%
goto fine

:fine
pause
exit
