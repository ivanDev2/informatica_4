#include <iostream>

using namespace std;

class rettangolo{

    private:
        double altezza;
        double base;

    public:
        void setAltezza(double n) { altezza = n;}  
        void setBase(double n) { base = n;}        
        double getAltezza() { return altezza;}
        double getBase() { return base;}
        
        double calcolaperimetro() {   
            return 2 * (base + altezza);
        }

        double calcolaArea(){
            return base*altezza;
        }

        void stampa(){
            double perimetro = calcolaperimetro();
            double area = calcolaArea();
            cout << "Base: " << getBase() << endl;
            cout << "Altezza: " << getAltezza() << endl;
            cout << "Perimetro: " << perimetro << endl;
            cout << "area:" << area << endl;
        }
};

int main(){
    rettangolo R1;

    double base, altezza;

    cout << "inserisci la base:" << base << endl;
    cin >> base;
    cout << "inserisci l'aktezza:" << altezza << endl;
    cin >> altezza;

    R1.setAltezza(altezza);
    R1.setBase(base);

    R1.stampa();  
}
