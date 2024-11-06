//moreschi ivan 4h

#include <stdio.h>

int main(){
	
	struct Orario{
		int h;
		int m;
		int s;
	};
	
	struct Orario inizio, fine, differenza;
	
	printf("inserisci l'orario iniziale: ");
	scanf("%d %d %d", &inizio.h, &inizio.m, &inizio.s);
	
	printf("inserisci l'orario finale: ");
	scanf("%d %d %d", &fine.h, &fine.m, &fine.s);
	
	int inizioInSecondi = inizio.h * 3600 + inizio.m * 60 + inizio.s;
	int fineInSecondi = fine.h * 3600 + fine.m * 60 + fine.s;
	
	if(fineInSecondi < inizioInSecondi){
		return -1;
	}
	
	int differenzaInSecondi = fineInSecondi - inizioInSecondi;
	
	differenza.h = differenzaInSecondi / 3600;
	differenzaInSecondi %= 3600;
	differenza.m = differenzaInSecondi / 60;
	differenza.s = differenzaInSecondi % 60;
	
	printf("la differenza di orario e' di: %d ore, %d minuti, %d secondi\n", differenza.h, differenza.m, differenza.s);
	
	return 0;
}
