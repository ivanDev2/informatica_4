#include <stdio.h>
#include <unistd.h>

int main() {
    int cateto1 = 3, cateto2 = 4, ipotenusa = 8;  
    pid_t pid;
    
    
    pid = fork();
    
    if (pid == 0) {
        printf("Perimetro (figlio): %d\n", cateto1 + cateto2 + ipotenusa);
    } else { 
        printf("Area (padre): %d\n",  (cateto1 * cateto2) / 2);
    }
    
    return 0;
}
