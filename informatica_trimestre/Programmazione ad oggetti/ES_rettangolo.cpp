#include <iostream>
#include <cmath>

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

        double calcolaDiagolanle(){
            return sqrt(pow(base, 2) + pow(altezza, 2));
        }

        void stampa(){
            double perimetro = calcolaperimetro();
            double area = calcolaArea();
            double diagonale = calcolaDiagolanle();
            cout << "Base: " << getBase() << endl;
            cout << "Altezza: " << getAltezza() << endl;
            cout << "Perimetro: " << perimetro << endl;
            cout << "area:" << area << endl;
            cout << "diagonale:" << diagonale << endl;
        }
};

int main(){
    rettangolo R1 , R2;

    double base, altezza, base2, altezza2;

    cout << "inserisci la base:" << endl;
    cin >> base;
    cout << "inserisci l'aktezza:" << endl;
    cin >> altezza;

    R1.setAltezza(altezza);
    R1.setBase(base);

    R1.stampa();  

    cout << "inserisci la base:" << endl;
    cin >> base2;
    cout << "inserisci l'aktezza:" << endl;
    cin >> altezza2;

    R2.setAltezza(altezza2);
    R2.setBase(base2);

    R2.stampa();
}
