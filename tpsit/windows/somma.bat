@echo off
setlocal enabledelayedexpansion

:: Inizializza la variabile somma a 0
set SOMMA=0

:: Controlla se sono stati passati argomenti
if "%~1"=="" (
    echo Utilizzo: somma.bat [numero1] [numero2] ...
    goto :EOF
)

:: Somma tutti gli argomenti
:loop
if "%~1"=="" goto done
set /a SOMMA+=%~1
shift
goto loop

:done
:: Mostra il risultato
echo Risultato della somma: %SOMMA%

endlocal
