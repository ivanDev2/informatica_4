#include <iostream>
#include <vector>

class Studente {
    public:
        int trovaNumero() {
            return numero;
        }
    private:
        float ciao = 50;
        int numero = 10;
};


int main() {
    Studente studente1;
    std::vector<int> Vettore1;

    Vettore1.push_back(10);
    Vettore1.push_back(800);

    int array1[10] ;


    for (int i = 0; i < Vettore1.size(); i++) {  // Corretto l'uso di size()
        //std::cout << Vettore1[i] << " " << std::endl;

        std::cout << "inserisci 10 num:" << std::endl;
        std::cin >> array1[i];
    }
    
    return 0;
}
