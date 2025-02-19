#include <iostream>
#include <time.h>
#include <stdlib.h>

#define N 5

void caricaVet(int vet[]);
void stampaVet(int vet[]);
int* maxVet(int vet[]);
int* minVet(int vet[]);
void ordinaVettore(int vet[]);

int main(){
    srand(time(NULL));
    int vet[N], *max, *min;

    caricaVet(vet);
    stampaVet(vet);

    max = maxVet(vet);
    printf("il massimo e' di:%d\n", *max);
    printf("l'indice e' di : %ld\n", max - vet);

    min = minVet(vet);
    printf("il minimo e' di:%d\n", *min);
    printf("l'indice e' di : %ld\n", min - vet);

    printf("vettore ordinato:\n");
    ordinaVettore(vet);
    stampaVet(vet);

}

void caricaVet(int vet[N]){
    int *p;
    p = vet;
    for(p = vet; p - vet < N; p++){
        *p = rand()% 100+1; 
    }
}

void stampaVet(int vet[N]){
    int *p;
    p = vet;
    for(p = vet; p - vet < N; p++){
        printf("%3d", *p);
    }
    printf("\n");
}

int* maxVet(int vet[N]){
    int *p;
    p = vet;
    int *max; 
    max = p;

    for(p = vet+1; p - vet < N; p++){
        if(*p > *max){
            max = p;
        }
    }

    return max; 
}

int* minVet(int vet[N]){
    int *p;
    p = vet;
    int *min; 
    min = p; 
    

    for(p = vet+1; p - vet < N; p++){
        if(*p < *min){
            min = p;
        }
    }

    return min;
}

void ordinaVettore(int vet[N]){
    int *p, *q, k;

    for(p = vet; p - vet < N-1; p++){
        for(q = p+1; q - vet < N; q++){

            if(*p > *q){
                k = *p;
                *p = *q;
                *q = k;  
            }
        }
    }
}
