//moreschi ivan 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define M 20 // lunghezza stringa
#define V 6 // lunghezza array
#define N 2 // numero degli studenti

typedef struct {
    char nome[M]; 
    int matricola;
    int anni;
    int voti[V];
} Informazioni;

void caricaTabella(Informazioni T[]);
void stampaTabella(Informazioni T[]);
void calcolaMedia(Informazioni T[]);

int main() {
    srand(time(NULL));
    Informazioni studente[N];

    caricaTabella(studente);
    stampaTabella(studente);

    calcolaMedia(studente);

    return 0; 
}

void caricaTabella(Informazioni tab[]) {
    for (int i = 0; i < N; i++) {
        printf("inserisci il tuo nome: ");
        scanf("%s", tab[i].nome); 

        printf("inserisci la tua matricola: ");
        scanf("%d", &tab[i].matricola); 

        printf("inserisci quanti anni hai: ");
        scanf("%d", &tab[i].anni); 

        for (int j = 0; j < V; j++) {
            tab[i].voti[j] = rand() % 10 + 1;
        }
    }
}

void stampaTabella(Informazioni tab[]) {
    for (int i = 0; i < N; i++) {
        printf("nome: %s\n", tab[i].nome); 
        printf("matricola: %d\n", tab[i].matricola);
        printf("anni: %d\n", tab[i].anni);

        printf("voti: ");
        for (int j = 0; j < V; j++) {
            printf("%3d ", tab[i].voti[j]);
        }
        printf("\n"); 
    }
}

void calcolaMedia(Informazioni tab[]) {
    float somma; 
    float media; 
    float mediaMax = -1; 
    float mediaMin = 11; 
    char nomeMax[M], nomeMin[M];

    for (int i = 0; i < N; i++) {
        somma = 0; // Azzerare somma per ogni studente
        for (int j = 0; j < V; j++) {
            somma += tab[i].voti[j];
        }
        media = somma / V;
        printf("%s media: %.1f\n", tab[i].nome, media); 

        // Controllo per media massima
        if (media > mediaMax) {
            mediaMax = media;
            strcpy(nomeMax, tab[i].nome); 
        }
        
        // Controllo per media minima
        if (media < mediaMin) {
            mediaMin = media;
            strcpy(nomeMin, tab[i].nome); 
        }
    }

    printf("Studente con la media massima: %s con media %.1f\n", nomeMax, mediaMax);
    printf("Studente con la media minima: %s con media %.1f\n", nomeMin, mediaMin);
}