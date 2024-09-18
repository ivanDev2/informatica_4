//moreschi ivan 4h

#include <stdio.h>
#include <string.h>
#define N 20
#define V 7

struct s_alunno{
	int matricola;
	char nome[N];
	char cognome[N];
	int voti[V];
}typedef s_alunno;


int main(){
	
	s_alunno alunno1;
	s_alunno alunno2, alunno3;

	    //avvaloro il record 
		printf("inserisci la matricola dello studente: ");
	    scanf("%d", alunno1.matricola);
	    
		printf("inserisci il nome: ");
		scanf("%s", alunno1.nome);
		
		printf("inserisci il cognome:");
		scanf("%s", alunno1.cognome);
		
		for(int i=0; i<V; i++){
			printf("inserisci i voti:\n");
			scanf("%d", &alunno1.voti[i]);
	    }
		
		//stampo il record 
		printf("%d\n", alunno1.matricola);
		printf("%s\n", alunno1.nome);
		printf("%s", alunno1.cognome);
		
		
		for(int i=0; i<V; i++){
			printf("i voti inseriti sono:\n");
		    printf("%d\n", alunno1.voti[i]);
	    }
		
		//copio record 
		alunno2 = alunno1;
		
		printf("%d\n", alunno2.matricola);
		printf("%s\n", alunno2.nome);
		printf("%s", alunno2.cognome);
		
		for(int i=0; i<V; i++){
			printf("i voti inseriti sono:\n");
		    printf("%d\n", alunno1.voti[i]);
	    }
	    
	    
	    alunno3.matricola = alunno1.matricola;
	    strcpy(alunno3.cognome , alunno1.cognome);
	    
	    
	    printf("%d\n", alunno3.matricola);
		printf("%s\n", alunno3.nome);
		printf("%s", alunno3.cognome);
		
		for(int i=0; i<V; i++){
			printf("i voti inseriti sono:\n");
		    printf("%d\n", alunno1.voti[i]);
	    }
	    
		return 0;
}




		
	
