#include <stdio.h>


void cesareCrypt(FILE *messaggio, FILE* puntout, int chiave){
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


int main(){
    char buffer[100];
    int chiave;
    char c;

    FILE *puntIn = fopen ("cryptFile.txt", "r");
    FILE *puntout = fopen("criptazoine.txt", "w");
    
    printf("inserisci la chiave: \n");
    scanf("%d", &chiave);

    cesareCrypt(puntIn,puntout,chiave);

    fclose(puntIn);

    return 0;
}