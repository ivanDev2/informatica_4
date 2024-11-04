/*funzione per scrivere un file di N record con N costante posta a 10;
funzione per leggere e stampare su monitor le informazioni del file di record 
(si usi il controllo di fine file e non il ciclo for con N perché la funzione sia valida quale che sia il numero di record del file (quindi anche diverso da N)).
conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata in output; 
la funzione restituisce un intero per ogni studente visualizza il suo cognome, 
la media dei suoi voti, il suo voto più alto e il suo voto più basso. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10 // Numero di studenti
#define M 20  // Lunghezza stringa
#define V 6   // Numero di voti

typedef struct alunno {
    char nome[M];
    char cognome[M];
    int voti[V];
} alunno;

// Funzione per caricare i dati nel file
void caricaFile(char *nomeFile, alunno buffer[]) {
    FILE *fp = fopen(nomeFile, "w");
    if (fp == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    for (int i = 0; i < N; i++) {
        printf("Inserisci il nome dello studente: ");
        scanf("%s", buffer[i].nome);
        printf("Inserisci il cognome dello studente: ");
        scanf("%s", buffer[i].cognome);

        for (int j = 0; j < V; j++) {
            buffer[i].voti[j] = rand() % 10 + 1;  // Genera voti casuali tra 1 e 10
        }

        fwrite(&buffer[i], sizeof(alunno), 1, fp);  // Scrivi il singolo alunno nel file
    }

    fclose(fp);
}

// Funzione per leggere e stampare i dati dal file
void leggiFile(char *nomeFile) {
    FILE *fp = fopen(nomeFile, "r");
    if (fp == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    alunno buffer;
    while (fread(&buffer, sizeof(alunno), 1, fp) == 1) {
        printf("Nome: %s\nCognome: %s\nVoti:", buffer.nome, buffer.cognome);
        for (int i = 0; i < V; i++) {
            printf(" %d", buffer.voti[i]);
        }
        printf("\n");
    }

    fclose(fp);
}

// Funzione per contare il numero di occorrenze di un cognome
int conta_cognome(char *nomeFile, char *cognome) {
    FILE *fp = fopen(nomeFile, "r");
    if (fp == NULL) {
        perror("Errore nell'apertura del file");
        return 0; // Restituisce 0 in caso di errore
    }

    alunno buffer;
    int contatore = 0;
    while (fread(&buffer, sizeof(alunno), 1, fp) == 1) {
        if (strcmp(buffer.cognome, cognome) == 0) {
            contatore++;
        }
    }

    fclose(fp);
    return contatore;
}

// Funzione per calcolare e visualizzare statistiche dei voti di ogni studente
void statistiche(char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    alunno buffer;
    while (fread(&buffer, sizeof(alunno), 1, fp) == 1) {
        int somma = 0, max_voto = buffer.voti[0], min_voto = buffer.voti[0];

        for (int i = 0; i < V; i++) {
            somma += buffer.voti[i];
            if (buffer.voti[i] > max_voto) {
                max_voto = buffer.voti[i];
            }
            if (buffer.voti[i] < min_voto) {
                min_voto = buffer.voti[i];
            }
        }

        float media = (float)somma / V;
        printf("Cognome: %s, Media: %.2f, Voto più alto: %d, Voto più basso: %d\n", buffer.cognome, media, max_voto, min_voto);
    }

    fclose(fp);
}

int main() {
    srand(time(NULL));  

    char nomeFile[] = "studente.dat";
    char cognome[20];
    int n;
    alunno buffer[N];  // Array per contenere gli studenti

    caricaFile(nomeFile, buffer);
    
    leggiFile(nomeFile);

    printf("\nInserisci il cognome da cercare: ");
    scanf("%s", cognome);

    n = conta_cognome(nomeFile, cognome);
    printf("Numero di studenti con cognome '%s': %d\n", cognome, n);

    printf("\nInformazioni degli studenti:\n");
    statistiche(nomeFile);

    return 0;
}
