//moreschi ivan 

#include <stdio.h>
#define R 10
#define C 10

typedef struct {
	float x;
    float y; 
}Piano_cartesiano;


int main(){

    int mat[R][C];
    char mat2[R][C];

    //mat2[6][2] = '*';

    printf("\n");

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            mat[i][j] = 0;  
        
        }
        printf("\n");
    }
    mat[6][3] = 4;

    for(int i=0; i<R; i++ ){
        for(int j=0; j<C;j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

}