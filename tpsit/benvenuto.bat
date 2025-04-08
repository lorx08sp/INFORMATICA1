@echo off
IF "%1"=="" (
    ECHO Utilizzo: benvenuto.bat [nome]
    PAUSE
    EXIT /B 1
)

:: Ottieni l'ora corrente (in formato 24 ore)
for /f "tokens=1 delims=:" %%a in ("%time%") do set ora=%%a

:: Determina il messaggio in base all'orario
IF %ora% GEQ 0 IF %ora% LSS 18 (
    set messaggio=Buongiorno
) ELSE (
    set messaggio=Buonasera
)

:: Visualizza il messaggio personalizzato
ECHO %messaggio% %1!
PAUSE
