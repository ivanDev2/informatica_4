//moreschi ivan 3h
// caricare random la matrice e stampare 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void carica_random(int [][C]);
void stampa(int [][C]);

int main(){
	int mat[R][C];
	srand(time(NULL));
	carica_random(mat);
	stampa(mat);
}

void carica_random(int m[][C]){
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			m[i][j]= rand()% 41+10;
			//printf("%d %d %d ", m[i][j],i,j);
		}
		printf("\n");
	}
}


void stampa(int m[][C]){
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			
			printf("%4d", m[i][j]);
		}
		printf("\n");
	}
}
