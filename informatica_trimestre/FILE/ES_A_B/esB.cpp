/*Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.
*/

#include <stdio.h>

int main(){

    char c;

    FILE * puntIn = fopen("nomi.txt", "r");
    FILE * puntout = fopen("nomi2.txt", "w");

    while (!feof (puntIn)) {

        c = fgetc(puntIn);
        

        if(c >= 'a' && c <= 'z'){
            c -=32;
        }

        fputc (c, puntout);
        printf("%c", c);
        
    }

    fclose(puntIn);
    fclose(puntout);
    return 0; 


}
