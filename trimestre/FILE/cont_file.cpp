#include <stdio.h>

int main(){
    int carattere = 0, parole = 1, righe = 0;
    char nomeFileIn[] = "frase.txt";
    char c;
    FILE *puntIn = fopen(nomeFileIn, "r");

    while(!feof(puntIn)){
        c = fgetc(puntIn);
        if(c != ' '){
            carattere++;
        }
        if(c == ' '){
            parole++;
        }
        if(c == '\n'){
            righe++;
        }
    }

    fclose(puntIn);
    printf("ci sono: %d caratteri, %d parole, %d frasi", carattere, parole, righe);
}