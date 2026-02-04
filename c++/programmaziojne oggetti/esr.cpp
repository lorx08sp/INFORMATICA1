#include "iostream"
#include "string"
using namespace std;

class Dipendente{
    private:
        int codice;
        string cognome; 
        double stipendio;
    
    public:
        Dipendente(int codice = 0, string cognome ="", double stipendio = 1200){
            this->codice = codice;
            this->cognome = cognome;
            this->stipendio = stipendio;
        }

        ~Dipendente(){
            cout<<"distruttore"<<endl;
        }
        
        int getCodice(){
            return codice;
        }
        string getCognome(){
            return cognome;
        }
        double getStipendio(){
            return stipendio;
        }

        void setCodice(int codice){
            this->codice = codice;
        }
        void setCognome(string cognome){
            this->cognome = cognome;
        }
        void setStipendio(double stipendio){
            this->stipendio = stipendio;
        }

        void aumentaStipendio(int x){
            stipendio = stipendio + ((stipendio/100)*x);
        }

        double stipendioAnnuo(){
            return stipendio*12;
        }

        void stampaDati(){
            cout<<"il codice è"<<codice<<endl;
            cout<<"il cognome è"<<cognome<<endl;
            cout<<"lo stipendio è"<<stipendio<<endl;
        }
};

class Manager : public Dipendente{
    private:
        double bonus;

    public:
        Manager(int codice = 0, string cognome = "", double stipendio = 1200, double bonus = 0)
        : Dipendente(codice, cognome, stipendio) {
            this->bonus = bonus;
        }

        double getBonus(){
            return bonus;
        }

        void setBonus(double bonus){
            this->bonus = bonus;
        }

        double stipendioTotale(){
            return getStipendio()+bonus;
        }

        void stampaDati(){
            cout<<"il codice è"<<getCodice()<<endl;
            cout<<"il cognome è"<<getCognome()<<endl;
            cout<<"lo stipendio senza il bonus è"<<getStipendio()<<endl;
            cout<<"il bonus è"<<bonus;
        }
};

int main(){
    Dipendente d1;
    Dipendente d2(10, "Rossi", 1500);

    Manager m1(20, "Bianchi", 2000, 500);

    d2.aumentaStipendio(10);

    m1.aumentaStipendio(15);

    d1.stampaDati();
    d2.stampaDati();
    m1.stampaDati();

    if(m1.stipendioTotale()>d1.getStipendio())
    {
        if(m1.stipendioTotale()>d2.getStipendio())
        {
            cout<<"dipendente che guadagna di più:";
            m1.stampaDati();
        }
        else
        {
            cout<<"dipendente che guadagna di più:";
            d2.stampaDati();
        }
    }
    else
    {
        if(d1.getStipendio()>d2.getStipendio())
        {
            cout<<"dipendente che guadagna di più:";
            d1.stampaDati();
        }
        else
        {
            cout<<"dipendente che guadagna di più:";
            d2.stampaDati();
        }
    }

    return 0;
}