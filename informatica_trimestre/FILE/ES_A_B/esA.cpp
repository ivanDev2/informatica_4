/*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo. 
Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt. 
*/

#include <stdio.h>

int main(){

    char c;

    FILE * puntIn = fopen("in.txt", "r");
    FILE * puntout = fopen("out.txt", "w");

    while (!feof (puntIn)) {

        c = fgetc(puntIn);
        fputc (c, puntout);
 
        printf("%c", c);
        
    }

    printf("\n");
    fclose(puntIn);
    fclose(puntout);
    return 0; 


}


