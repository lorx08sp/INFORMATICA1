#include "iostream"
using namespace std;

class Rettangolo
{
    private:
        double base, altezza;

    public: 

    Rettangolo(double base = 10, double altezza = 20)
    {
        this->base=base;
        this->altezza=altezza;
    }

    double area()
    {
        double area = (double)base*altezza; 
        return area;
    }
    double perimetro()
    {
        double perimetro = (double)(base+altezza)*2;
        return perimetro;
    }
};

int main()
{
    double base, altezza;
    cout<< "inserisci base:"<<endl;
    cin >>base;
    cout<< "inserisci altezza:"<<endl;
    cin >>altezza;
    
    Rettangolo r1(base, altezza);
    Rettangolo r2;
    Rettangolo r3(base);
    
    cout<<"\n";
    cout<< "l'area è: " << r1.area() << endl;
    cout<< "il perimetro è: " << r1.perimetro() << endl;
    cout<<"\n";

    cout<< "l'area è: " << r2.area() << endl;
    cout<< "il perimetro è: " << r2.perimetro() << endl;
    cout<<"\n";

    cout<< "l'area è: " << r3.area() << endl;
    cout<< "il perimetro è: " << r3.perimetro() << endl;
    cout<<"\n";

    return 0;
}