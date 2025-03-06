#include <iostream>

int cont = 1;

struct s_nodo {
    int info;
    struct s_nodo *next;
};typedef struct  s_nodo s_nodo;

s_nodo* inserisci_testa(s_nodo *);
void stampa(s_nodo *testa);
s_nodo* cancella(s_nodo *testa);


int main() {
    struct s_nodo* testa = NULL;
    for(int i=0; i<3 ; i++){
       testa= inserisci_testa(testa); 
       cont ++;
    }
    stampa(testa);
    printf("\n");

    while(testa != NULL){
        testa = cancella(testa);
        stampa(testa);
        printf("\n");

    }

}

//funzione per inserire un nodo in testa
s_nodo* inserisci_testa(s_nodo *testa){
    s_nodo *P;
    P = new s_nodo;
    P-> info = cont;
    P -> next = testa;
    testa = P;

    return testa;

}

//stampa 
void stampa(s_nodo *testa){
    s_nodo *P = testa;

    while(P != NULL){
        printf("%d\n", P ->info);
        P = P -> next;
    }
}

s_nodo* cancella(s_nodo *testa){

    if(testa == NULL){
        printf("lista vuota\n");
        return NULL;
    }
    
    s_nodo *P = testa;
    testa = testa -> next;
    delete(P);
    
    return testa;
}





