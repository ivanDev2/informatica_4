#include <stdio.h>

int palindromo(int num) {
    int inverso = 0;
    int originale = num;

    // Invertiamo il numero
    while (num > 0) {
        int r = num % 10;
        inverso = inverso * 10 + r;
        num /= 10;
    }

    // Controlliamo se il numero originale è uguale al numero invertito
    return originale == inverso;
}

int main() {
    int number;

    printf("Inserisci un numero: ");
    scanf("%d", &number);

    if (palindromo(number)) {
        printf("%d è un numero palindromo.\n", number);
    } else {
        printf("%d non è un numero palindromo.\n", number);
    }

    return 0;
}
