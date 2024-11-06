//moreschi ivan 

#include <stdio.h>

typedef struct {
	float x;
    float y; 
}Punti;

int main(){

    Punti piano_cartesiano = {7, 9};
    Punti piano_cartesiano2 = {10, 4};
    

    printf("%.2f %.2f", piano_cartesiano.x, piano_cartesiano.y);

    printf("\n");

   printf("%.2f %.2f", piano_cartesiano2.x, piano_cartesiano2.y);

   return 0;

}
