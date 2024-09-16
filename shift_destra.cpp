// ivan moreschi 
// shift a destra

#include <stdio.h>
#define N 6

void  carica_array (int []);
void stampa_array(int []);
void shift_destra(int [], int );

int main(){
	int vet[N];
	carica_array(vet);//carico l'array
	stampa_array(vet);//lo stampo
	
	shift_destra(vet, 2);
	stampa_array(vet);
	
	
}


//chiedo all'utente di inserire i numeri del vettore 
void carica_array(int vet[]){
  for(int i=0; i<N; i++){
    printf("Inserisci un numero: ");
    scanf("%d", &vet[i]);
  }
}

//stampo
void stampa_array(int vet[]){
  for(int i=0; i<N; i++){
    printf("%d\t", vet[i]);
  }
  printf("\n");
}

// funzione per far shiftare a sinistra,(vettore, posizione dove shiftare)
void shift_destra(int v[], int p){
	for(int i=N-1; i>p;i--){
		v[i]=v[i-1];
	}
}

