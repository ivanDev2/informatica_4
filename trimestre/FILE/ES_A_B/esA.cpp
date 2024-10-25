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


