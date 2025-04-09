@echo off
setlocal enabledelayedexpansion

:: Controlla che il parametro del nome sia stato fornito
if "%~1"=="" (
    echo Utilizzo: benvenuto.bat [Nome]
    goto :EOF
)

:: Salva il nome dell'utente
set NOME=%~1

:: Chiedi all'utente di inserire l'orario (solo l'ora, formato 24h)
set /p ORA=Inserisci l'orario attuale (solo ora, da 0 a 24): 

:: Controllo base per validità dell'orario
if %ORA% LSS 0 (
    echo Orario non valido.
    goto :EOF
)
if %ORA% GTR 24 (
    echo Orario non valido.
    goto :EOF
)

:: Decidi il saluto in base all'orario
if %ORA% LEQ 18 (
    echo Buongiorno %NOME%!
) else (
    echo Buonasera %NOME%!
)

endlocal
