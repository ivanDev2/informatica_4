#include <iostream>

class Frazione{
    private:
    int num;
    int den;

    public:

    Frazione(int num = 1, int den = 1){
        this -> num = num;
        this -> den = den;
    }
}

main(){
    Frazione f1;
    Frazione f2(2,3);
    Frazione f3(5);
}