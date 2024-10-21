#include <stdio.h>

int main(){

    char c;

    FILE * puntIn = fopen("nomi.txt", "r");
    FILE * puntout = fopen("nome.txt", "w");

    while (!feof (puntIn)) {

        c = fgetc(puntIn);
        fputc (c, puntout);
 
        printf("%c", c);
        
    }

    fclose(puntIn);
    fclose(puntout);
    return 0; 


}


