#include <iostream>
#include <string>

using namespace std;

class Studente {
private:
    int matricola;
    string cognome;
    int voti[8];

public:
    // Costruttore con parametri opzionali
    Studente(int matricola = 0, string cognome = "") {
        this->matricola = matricola;
        this->cognome = cognome;
        for (int i = 0; i < 8; i++) {
            voti[i] = 0;
        }
    }

    // Distruttore
    ~Studente() {
        cout << "distruttore" << endl;
    }

    // Getter e Setter matricola
    int getMatricola() {
        return matricola;
    }

    void setMatricola(int matricola) {
        this->matricola = matricola;
    }

    // Getter e Setter cognome
    string getCognome() {
        return cognome;
    }

    void setCognome(string cognome) {
        this->cognome = cognome;
    }

    // Set voti (un solo parametro, default = 6)
    void setVoti(int voto = 6) {
        for (int i = 0; i < 8; i++) {
            voti[i] = voto;
        }
    }

    // Restituisce il voto più alto
    int VotoMaggiore() {
        int max = voti[0];
        for (int i = 1; i < 8; i++) {
            if (voti[i] > max) {
                max = voti[i];
            }
        }
        return max;
    }

    // Restituisce la media dei voti
    float MediaVoti() {
        int somma = 0;
        for (int i = 0; i < 8; i++) {
            somma += voti[i];
        }
        return somma / 8.0;
    }
};

int main() {
    // Creazione oggetti
    Studente s1;                       // costruttore senza parametri
    Studente s2(10, "Rossi");          // matricola e cognome

    // Uso dei metodi
    s1.setCognome("Bianchi");
    s1.setVoti(7);

    s2.setVoti(8);

    // Confronto media
    if (s1.MediaVoti() > s2.MediaVoti()) {
        cout << "Media più alta: " << s1.getCognome() << endl;
    } else {
        cout << "Media più alta: " << s2.getCognome() << endl;
    }

    // Confronto voto massimo
    if (s1.VotoMaggiore() > s2.VotoMaggiore()) {
        cout << "Voto più alto: " << s1.getCognome() << endl;
    } else {
        cout << "Voto più alto: " << s2.getCognome() << endl;
    }

    return 0;
}
