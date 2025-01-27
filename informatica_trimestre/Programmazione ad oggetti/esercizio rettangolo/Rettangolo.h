#include <iostream>
#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo{
    private:
        double base;
        double altezza;
    public:
    Rettangolo();
    Rettangolo(double x);
    Rettangolo(double x, double y);
    ~Rettangolo();
    void setBase(double b);
    void setAltezza(double altezza);
    double getBase();
    double getAltezza();
    double calcolaPerimetro();
    double calcolaArea();
    double calcolaDiagonale();
    void stampa();

};
#endif

