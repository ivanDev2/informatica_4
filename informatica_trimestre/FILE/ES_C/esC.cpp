//Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)

#include <stdio.h>

int main() {
    int caratteriTotali = 0, parole = 0, righe = 1;
    char nomeFileIn[] = "frase.txt";
    char c, ultimoCarattere = ' ';
    FILE *puntIn = fopen(nomeFileIn, "r");

    if (puntIn == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    while ((c = fgetc(puntIn)) != EOF) {
        // Conta i caratteri (escludendo spazi, tabulazioni e newline)
        if (c != ' ' && c != '\t' && c != '\n') {
            caratteriTotali++;
        }

        // Conta le parole quando si passa da un carattere a un delimitatore
        if ((c == ' ' || c == '\t' || c == '\n') && (ultimoCarattere != ' ' && ultimoCarattere != '\t' && ultimoCarattere != '\n')) {
            parole++;
        }

        // Conta le righe
        if (c == '\n') {
            righe++;
        }

        // Memorizza l'ultimo carattere letto
        ultimoCarattere = c;
    }

    // Aggiunge una parola se l'ultimo carattere non era uno spazio, tab o newline
    if (ultimoCarattere != ' ' && ultimoCarattere != '\t' && ultimoCarattere != '\n') {
        parole++;
    }

    fclose(puntIn);
    printf("Ci sono: %d caratteri, %d parole, %d righe\n", caratteriTotali, parole, righe);
    return 0;
}
