#include <iostream>
#include "quadrilatero.h"

using namespace std;

void Quadrilatero::setl1(double l1){
    this -> lato1 = l1;
}

void Quadrilatero::setl2(double l2){
    this -> lato2 = l2;
}

void Quadrilatero::setl3(double l3){
    this -> lato3 = l3;
}

void Quadrilatero::setl4(double l4){
    this -> lato4 = l4;
}

double Quadrilatero::getl1(){
    return lato1;
}

double Quadrilatero::getl2(){
    return lato2;
}

double Quadrilatero::getl3(){
    return lato3;
}

double Quadrilatero::getl4(){
    return lato4;
}

Quadrilatero::Quadrilatero(){
    this -> lato1 = 0;
    this -> lato2 = 0;
    this -> lato3 = 0;
    this -> lato4 = 0;
}
Quadrilatero::Quadrilatero(int l1, int l2, int l3, int l4){
    this -> lato1 = l1;
    this -> lato2 = l2;
    this -> lato3 = l3;
    this -> lato4 = l4;
}

double  Quadrilatero::calcolaperimetro(){
    double perimetro;
    perimetro = lato1 + lato2 + lato3 + lato4;
    return perimetro;
}

Rettangolo::Rettangolo(int base; int altezza):Quadrilatero(int base; int altezza; int base; int altezza){
    
}
void Quadrilatero::stampa(){
    double perimetro = calcolaperimetro();
    cout << "il lato 1 e' di :" << lato1 << endl;
    cout << "il lato 2 e' di :" << lato2 << endl;
    cout << "il lato 3 e' di :" << lato3 << endl;
    cout << "il lato 4 e' di :" << lato4 << endl;
    cout << "il perimetro e' di:" << perimetro << endl;
}

