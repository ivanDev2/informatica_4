//moreschi ivan

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){
     
     srand(time(NULL));

     int righe, num_rand,num;

     printf("inserisci il numero di righe:\n");
     scanf("%d", &righe);

     for(int i=0; i < righe; i++){
        for(int spazio=1; spazio <= righe - i; spazio++){
            printf("  ");
        }
        for(int j=0; j <= i; j++){
           // num = pow
            num_rand = rand() % 100;
            printf("%3d", num_rand);
        }
        printf("\n");
     }

     return 0;
}


