#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main(int argc, char** argv){
    Rettangolo R1;
    R1.setBase(4);
    R1.setAltezza(4);
    R1.stampa();

    Rettangolo R2;
    R2.stampa();
    cout<<endl;

    Rettangolo R3(5);
    R3.stampa();
    cout<<endl;

    Rettangolo R4(4,2);
    R4.stampa();
    return 0;
}