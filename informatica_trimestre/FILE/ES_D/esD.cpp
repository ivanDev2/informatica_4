/*Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)composto da una sequenza di numeri di una cifra separati da uno 
spazio bianco e successivamente scrive 2 file, pari.txt e dispari.txt, nei quali dovrai inserire 
i numeri che hai letto a seconda del loro valore pari o dispari
*/

#include <stdio.h>

int main(){

    char c;
    int numero = 0;
    int numeroIn = 0;

    FILE * numeri = fopen("numeri.txt", "r");

    FILE * dispari = fopen("dispari.txt", "w");

    FILE * pari = fopen("pari.txt", "w");

    while(!feof(numeri)){


            c = fgetc(numeri);

            if(c == ' ' || c == '\n'){
                if(numeroIn){
                    if(numero %2 == 0){
                        fprintf(pari, "%d\n", numero);   
                    } else{
                        fprintf(dispari, "%d\n", numero);
                    }
                }

                numero = 0;
                numeroIn = 0;

            }

            else {

                numero = numero *10 + ( c - '0');

                numeroIn = 1;
            }
    }

    fclose(numeri);
    fclose(pari);
    fclose(dispari);

    return 0; 

}
