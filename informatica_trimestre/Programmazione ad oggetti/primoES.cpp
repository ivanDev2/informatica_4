#include <iostream>

using namespace std;

class Frazione {
    private:
        int numeratore;
        int denominatore;

    public:
        void setNumeratore(int n) {  numeratore = n; }

        void setDenominatore(int n) { denominatore = n; }

        int getNumeratore() {return numeratore;}

        int getDenominatore() { return denominatore;}

        void setNumeratoreDenom(int n, int d) {
            numeratore = n;
            denominatore = d;
        }

        void stampa() {cout << numeratore << "/" << denominatore << "\n";}
};

int main() { 
    Frazione f1, f2;  
    f1.setNumeratore(12); 
    f1.setDenominatore(3);
    f1.stampa();
    
}

