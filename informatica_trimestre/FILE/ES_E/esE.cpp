//Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key, usando l’algoritmo di Cesare.

#include <stdio.h>


void cesareCrypt(FILE *messaggio, FILE *puntout, int chiave){
    while(!feof(messaggio)){
        char lettera = fgetc(messaggio);

        //verifica se è una lettera maiuscola
        if(lettera >= 'A' && lettera <= 'Z'){
            lettera = ( lettera - 'A' + chiave) %26 +'A';
            fputc(lettera, puntout);
        }
        //verifica se è una lettera minuscola 
        else if(lettera >= 'a' && lettera <= 'z'){
            lettera = (lettera - 'a' + chiave) %26 +'a';
            fputc(lettera, puntout);
        }
    }
}

/*void cesareDecrypt(FILE *messaggio, FILE *puntout, int chiave){
    while(!feof(messaggio)){
        char lettera = fgetc(messaggio);

        if(lettera >= 'A' && lettera <= 'Z'){
            lettera = ( lettera + 'A' + chiave) %26 + 'A';
            fputc(lettera, puntout);
        }
        else if(lettera >= 'a' && lettera <= 'z'){
            lettera = (lettera + 'a' + chiave) %26 + 'a';
            fputc(lettera,puntout);
        }
    }
}
*/

int main(){
    char buffer[100];
    int chiave;
    char c;

    FILE *puntIn = fopen ("cryptFile.txt", "r");
    FILE *puntout = fopen("criptazoine.txt", "w");
    FILE *puntout2 = fopen("decriptazione.txt", "w");
    
    printf("inserisci la chiave: \n");
    scanf("%d", &chiave);

    cesareCrypt(puntIn,puntout,chiave);
    cesareDecrypt(puntIn,puntout2,chiave);

    fclose(puntIn);

    return 0;
}