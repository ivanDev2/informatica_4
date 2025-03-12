/*Implementare una lista concatenata semplice con le operazioni di base: inserimento in testa, in coda, eliminazione, ricerca e visualizzazione.*/
/*Scrivere una funzione che conti il numero di nodi in una lista concatenata senza utilizzare un contatore interno alla classe.*/

#include <iostream>
#include <ctime>

using namespace std;

struct s_nodo
{
    int info;
    struct s_nodo *next;
};
typedef struct s_nodo s_nodo;

class lista
{
private:
    s_nodo *s;

public:
    // costruttore
    lista()
    {
        s = NULL;
    }

    // funzione per inserire un nodo in testa
    s_nodo *inserisci_testa()
    {
        s_nodo *P;
        P = new s_nodo;
        P->info = rand() % 101;
        P->next = s;
        s = P;

        return s;
    }

    void inserisci_ultimo()
    {
        s_nodo *P;
        P = new s_nodo;
        P->info = rand() % 101;
        P->next = NULL;
        if (s == NULL)
        {
            s = P;
        }
        else
        {
            s_nodo *q = s;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = P;
        }
    }

    // stampa
    void stampa()
    {
        s_nodo *P = s;

        while (P != NULL)
        {
            cout << P->info << " ";
            P = P->next;
        }
        cout << endl;
    }

    // funzione per cancellare un nodo
    int cancella_nodo()
    {

        if (s == NULL)
        {
            cout << "Lista vuota" << endl;
            return 1;
        }
        else
        {
            s_nodo *P = s;
            s = s->next;
            delete (P);
        }

        return 0;
    }

    // funzione per la ricerca di un nodo
    int ricercaNodo(int value)
    {
        s_nodo *P = s;

        while (P != NULL)
        {
            if (P->info == value)
            {
                return 1;
            }
            P = P->next;
        }
        cout << "Nodo non trovato" << endl;
        return 0;
    }

    // funzione per contare i nodi
    int contNodo()
    {
        s_nodo *P;
        int cont = 0;
        P = s;
        while (P != NULL)
        {
            cont++;
            P = P->next;
        }
        cout << "Il numero di nodi è: " << cont << endl;
        return cont;
    }

    void rimuovi_duplicati(){
        s_nodo *P = s;
        s_nodo *Q = s;
        s_nodo *R = s;
        while (P != NULL)
        {
            while (Q != NULL)
            {
                if (P->info == Q->info)
                {
                    R->next = Q->next;
                    delete(Q);
                    Q = R->next;
                }
                else
                {
                    R = Q;
                    Q = Q->next;
                }
            }
            P = P->next;
            Q = P;
            R = P;
        }
    }
};

int main()
{
    srand(time(NULL));
    lista L1;
    int r;

    for (int i = 0; i < 5; i++)
    {
        L1.inserisci_testa();
    }

    L1.stampa();

    // L1.inserisci_ultimo();
    // L1.stampa();

    // L1.cancella_nodo();
    // L1.stampa();

    // cout << L1.ricercaNodo(32);

    r = L1.contNodo();

    L1.rimuovi_duplicati();
    L1.stampa();
}
