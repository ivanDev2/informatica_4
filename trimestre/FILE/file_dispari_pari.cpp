#include <stdio.h>

int main(){

    char c;
    int numero = 0;
    int numeroIn = 0;

    FILE * numeri = fopen("numeri.txt", "r");

    FILE * dispari = fopen("dispari.txt", "w");

    FILE * pari = fopen("pari.txt", "w");

    while(!feof(numeri)){

            if(c != ' ' || c != '\n'){
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

                numero = numero *10 ( c - '0');

                numeroIn = 1;
            }
    }

    fclose(numeri);
    fclose(pari);
    fclose(dispari);

}
