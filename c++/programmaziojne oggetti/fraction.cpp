#include "iostream"
//using namespace std;

class Frazione{
    private:
        int numeratore;
        int denominatore;
    
    public: 

    void setNumeratore(int n)
    {
        numeratore = n;
    }

    void setDenominatore(int n)
    {
        denominatore = n;
    }

    int getNumeratore(){return numeratore;}
    int getDenominatore(){return denominatore;}

};

int main()
{
    Frazione f1, f2;
    f1.setNumeratore(12);
    f1.setDenominatore(3);
    int n1= f1.getNumeratore();
    int n2= f1.getDenominatore();
    std::cout <<"numeratore: " << n1;
    std::cout << std::endl << "denominatore: " << n2;
    return 0;
}