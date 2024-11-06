// moreschi ivan 3h
// caricare e stampare una matrice 

#include <stdio.h>
#define R 5
#define C 5


void carica(int [][C]);
void stampa(int [][C]);

int main(){
	//inizializzo una matrice con 5 righe e 5 colonne 
	int mat[R][C];
	carica(mat);
	stampa(mat);
	
}

//funzione per far chiedere all'untente i numeri da mettere nella matrice 
void carica(int m[][C]){
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			printf("inserisci un numero:");
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
}

//funzione per stampare a schermo la matrice 
void stampa(int m[][C]){
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			
			printf("%3d", m[i][j]);
		}
		printf("\n");
	}
}
