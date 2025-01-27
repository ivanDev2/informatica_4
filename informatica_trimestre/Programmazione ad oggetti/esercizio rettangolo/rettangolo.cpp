#include <iostream>
#include <math.h>
#include "Rettangolo.h"

using namespace std;

void Rettangolo::setBase(double b){
    this ->base = b; 
}
void Rettangolo::setAltezza(double a){
    this ->altezza = a;
}

double Rettangolo::getBase(){
    return base;
}

double Rettangolo::getAltezza(){
    return altezza;
}

Rettangolo::Rettangolo(){
    this -> base = 0;
    this -> altezza = 0;
}

Rettangolo::~Rettangolo(){
    cout <<"hai chiamto distruttore \n";
}

Rettangolo::Rettangolo(double x){
    altezza = x;
    base = altezza;
}

Rettangolo::Rettangolo(double x, double y){
    this -> base = x;
    this -> altezza = y;
}

double Rettangolo::calcolaPerimetro(){
    double perimetro;
    perimetro = (base*2) + (altezza*2);
    return perimetro;
}

double Rettangolo::calcolaArea(){
    double area;
    area = base * altezza;
    return area;
}

double Rettangolo::calcolaDiagonale(){
    double diagonale;
    diagonale = sqrt((base *base) + (altezza * altezza));
    return diagonale;
}

void Rettangolo::stampa(){
    double perimetro = calcolaPerimetro();
    double area = calcolaArea();
    double diagonale = calcolaDiagonale();
    cout << "La base e' di:" << base << endl;
    cout << "L'altezza e' di:" << altezza << endl;
    cout << "il perimetro e' di:" << perimetro << endl;
    cout << "L'area e' di:" << area << endl;
    cout << "La diagonale e' di:" << diagonale << endl;

}






