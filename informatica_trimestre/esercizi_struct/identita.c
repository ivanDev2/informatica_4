//moreschi iavn 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define M 20 // lunghezza stringa
#define V 10 // lunghezza array

typedef struct {
    int matematica[V];
    int italiano[V];
    int storia[V];
    int informatica[V];
    int motoria[V];


}Materie;

typedef struct{
    int giorno;
    int mese; 
    int anno;

}Data;

typedef struct {
    int ore;
    int minuti;
    int secondi;

}Orario;


typedef struct {
    char nome[M];
    char cognome[M];
    char luogo_nascita[M];
    char indirizzo[M];
    char cap[M];

    char nome_scuola[M];
    Materie voti;

    char lavori_passati[M];

    Orario orario1;

}Identita;


void caricaTabella(Identita T[]);
void stampaTabella(Identita T[]);

int main(){
    srand(time(NULL));
    Identita tab[N];
}

void caricaTabella(Identita tab[]){

}



