/*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
Il  programma  legge  carattere per carattere il contenuto del file “file_src” e lo ricopia nel file “file_dst”.
“file_src” e “file_dst” vanno passati al main come parametri. Gestire eventuali errori o utilizzi non corretti del programma.
*/

#include <stdio.h>

int main(){

    char c;

    FILE * puntIn = fopen("file_src.txt", "r");
    FILE * puntout = fopen("file_dst.txt", "w");

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