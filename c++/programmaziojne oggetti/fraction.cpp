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
    void semplifica(void)
    {
        int r = mcd(numeratore, denominatore);
        numeratore/=r;
        denominatore/=r;
        cout<<nu
    }
    int mcd(int x,int b)
    {
        if(x<b)
        {
            int d=x; 
            x=b;
            b=d;
        }
        else
        {
            int d=b; 
            b=x;
            x=b;
        }
        while( b != 0)
        {
            int resto = x%b;
            x=b;
            b=resto;
        }
       
        return x;
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