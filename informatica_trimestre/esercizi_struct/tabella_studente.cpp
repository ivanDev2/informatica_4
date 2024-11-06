//moreschi ivan

#include <stdio.h>
#include <string.h>
#include  <time.h>
#include <stdlib.h>

#define N 2 //numero degli studenti 
#define M 20 //lunghezza della stringa 
#define V 8 // lunghezza array

//sruct per il data di nascita 
struct Data{
	int giorno;
	int mese;
	int anno;
}typedef Nascita;

//struct per le informazioni dell'alunno
struct s_alunno{
	char cognome[M];
	Nascita Nascita1;
	int voti[V];
}typedef s_alunno;


void caricaTabella(struct s_alunno T[]);
void stampaTabella(struct s_alunno T[]);
int stampaMedia(s_alunno tab[]);
int ricercaCog(struct s_alunno t[], char cog[]);
int studenti10(s_alunno t[]);
void vis(s_alunno t[]);
void formattaCogn(s_alunno t[]);



int main(){
	
	srand(time(NULL));
	s_alunno tab[N];
	char r[M];
	int ris, t;

    //funzioni per caricare e stampare la tabella 
	caricaTabella(tab);
	formattaCogn(tab);
	stampaTabella(tab);
	
	//ricerca del cognome
	printf("inserisci il cognome da cercare: ");
	scanf("%s", r);
	int indice = ricercaCog(tab, r);
	printf("il cognome trovato e' all'indice: %d\n", indice);
	
	//stampa la media 
	ris = stampaMedia(tab);
	
	//t = studenti10(tab);
	
	vis(tab);
	
	formattaCogn(tab);
	
	
	
}


void caricaTabella(struct s_alunno tab[]){
	
	for(int i=0; i<N; i++){
		
		printf("inserisci il tuo cognome:");
		scanf("%s", tab[i].cognome);
		
		printf("inserisci il giorno di nascita: ");
		scanf("%d", &tab[i].Nascita1.giorno);
		printf("inserisci il mese di nascita: ");
		scanf("%d", &tab[i].Nascita1.mese);
		printf("inserisci l'anno di nascita: ");
		scanf("%d", &tab[i].Nascita1.anno);
		
		for(int j=0; j<V; j++){
			tab[i].voti[j]= rand()% 10 + 1; 
		}
			
	}
}

void stampaTabella(struct s_alunno tab[]){
	
	printf("-----------------------------");
	printf("\n    dati degli alunni    \n\n");
	for(int i=0; i<N; i++){
		
		printf("cognome: %s\n", tab[i].cognome);
		printf("data di nascita: %d/%d/%d \n", tab[i].Nascita1.giorno, tab[i].Nascita1.mese, tab[i].Nascita1.anno);
		
		printf("i voti sono:\n");
		for(int j=0; j<V; j++){
			printf("%-3d", tab[i].voti[j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n\n");
}
int ricercaCog(s_alunno t[], char cog[]){
	for(int i=0; i<N; i++){
		
		if(strcmp(cog,  t[i].cognome)==0){
			return i;
		}
	}
	return -1;
}

int stampaMedia(s_alunno tab[]){
	float media;
	float somma = 0;
	int cont;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<V; j++){
			somma += tab[i].voti[j];
		}
		media = somma/V;
		printf("%s media: %f\n", tab[i].cognome, media);
		
		if ( media >= 6){
			cont ++;
		}
		media = 0;
		somma = 0;
	}
	return cont;
}

int studenti10(struct s_alunno tab[]){
	int cont;
	for(int i=0; i<N; i++){
		for(int j=0; j<V; j++){
			if(tab[i].voti[j] == 10){
				cont ++;
				break;
			}
		}
		
	}
	printf("gli studenti con almeno un voto uguale a 10 sono: %d\n", cont);
	return cont;
}

void vis(struct s_alunno tab[]){
	int cont;
	int k=0;
	for(int i=0; i<N; i++){
		cont=0;
		for(int j=0; j<V ; j++){
			if(tab[i].voti[j] == 10){
				cont ++;
			}
		}
		if(cont>0){
			k++;
		}
	}
	printf("gli studenti con almeno un voto uguale a 10 sono: %d", k);
}


void formattaCogn(struct s_alunno tab[]){

	for(int i=0; i<N; i++){
		if(tab[i].cognome[0] >= 'a' && tab[i].cognome[0] <= 'z'){
			tab[i].cognome[0] -=32;
		}

		for(int j=1; tab[i].cognome[j] != '\0'; j++){
			if(tab[i].cognome[j] >= 'A' &&  tab[i].cognome[j] <= 'Z'){
				tab[i].cognome[j] += 32;
			}
		}
	}

}