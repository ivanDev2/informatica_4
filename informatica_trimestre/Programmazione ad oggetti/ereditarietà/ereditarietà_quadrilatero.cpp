// crear eereditarietà sulla classe quadrilatero

#include <iostream>

using namespace std;

class Quadrilatero{

    private:
        int lato1;
        int lato2;
        int lato3;
        int lato4;

    public:
        //metodo costruttore
        Quadrilatero(int l1, int l2, int l3, int l4){
            lato1 = l1;
            lato2 = l2;
            lato3 = l3;
            lato4 = l4;
        }

        //metodo per calcolare il perimetro
        int perimetro(){
            return (lato1 + lato2 + lato3 + lato4);
        }
        //metodi get per i lati
        int getLato1() { 
            return lato1; 
        }

        int getLato2() { 
            return lato2; 
        }
        int getLato3() {
            return lato3; 
        }

        int getLato4() { 
            return lato4; 
        }

        void stampa(){
            cout << "il perimetro è del quadrilatero:" << perimetro() << endl;
        }      
};

class Rettangolo : public Quadrilatero{

    public:
        //metodo costruttore
        Rettangolo(int base, int altezza) : Quadrilatero(base, altezza, base , altezza){}

        //metodo per calcolare il perimetro
        int perimetro(){ 
            return (getLato1() * 2 + getLato2() * 2);
        }

        //metodo per calcolare l'area
        int area(){
            return (getLato1() * getLato2());
        }

        void stampa(){
            cout << "il perimetro è del rettangolo:" << perimetro() << endl;
            cout << "l'area è del rettangolo:" << area() << endl;
        }
};

class Quadrato : public Rettangolo{

    public:
        //metodo costruttore
        Quadrato(int lato) : Rettangolo(lato, lato){}
        
        //metodo per calcolare il perimetro
        int perimetro(){
            return (getLato1() * 4);
        }
        
        //metodo per calcolare l'area   
        int area(){
            return (getLato1() * getLato2());
        }

        void stampa(){
            cout << "il perimetro è del quadrato:" << perimetro() << endl;   
            cout << "l'area è del quadrato:" << area() << endl;
        }
};


int main(){
    

    Quadrilatero q(3, 1, 6, 10);
    q.stampa();

    cout << endl;

    Rettangolo r(5, 10);
    r.stampa();

    cout << endl;

    Quadrato s(4);
    s.stampa();

    return 0;
}