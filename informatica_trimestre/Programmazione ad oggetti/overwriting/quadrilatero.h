#include <iostream>
#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {

    private:
        double colore1;

    protected:
        double lato1,lato2,lato3,lato4;
    
    public:
        void setl1(double lato1);
        void setl2(double lato2);
        void setl3(double lato3);
        void setl4(double lato4);

        double getl1();
        double getl2();
        double getl3();
        double getl4();
        
        Quadrilatero(int lato1, int lato2, int lato3, int lato4);
        Quadrilatero();
        double calcolaperimetro();
        void stampa();
};

class Rettangolo : public Quadrilatero{
    public:
        Rettangolo(int base; int altezza);
        double calcolaPerimetro();
        double calcolaArea();
}
#endif