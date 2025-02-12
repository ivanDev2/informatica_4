#include <iostream>
#include <time.h>
#include <stdlib.h>

#define N 5

void caricaVet(int vet[N]);
void stampaVet(int vet[N]);
int maxVet(int vet[N]);
int minVet(int vet[N]);

int main(){
    srand(time(NULL));
    int vet[N], max, min;

    caricaVet(vet);
    stampaVet(vet);
    max = maxVet(vet);
    printf("il massimo e' di:%d\n", max);
    min = minVet(vet);
    printf("il minimo e' di:%d\n", min);
}

void caricaVet(int vet[N]){
    int *p;
    p = vet;
    for(p = vet; p - vet < N; p++){
        *p = rand()% 10; 
    }
}

void stampaVet(int vet[N]){
    int *p;
    p = vet;
    for(p = vet; p - vet < N; p++){
        printf("%2d", *p);
    }
    printf("\n");
}

int maxVet(int vet[N]){
    int *p;
    p = vet;
    int max = *p; 
    

    for(p = vet; p - vet < N; p++){
        if(*p > max){
            max = *p;
        }
    }

    return max; 
}

int minVet(int vet[N]){
    int *p;
    p = vet;
    int min = *p; 
    

    for(p = vet; p - vet < N; p++){
        if(*p < min){
            min = *p;
        }
    }

    return min;
}
