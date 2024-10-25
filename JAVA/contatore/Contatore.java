package contatore;

public class Contatore {
    // Variabile statica
    static int contatore = 0;

    int contatore2 = 0;

    final int contatore3 = 0;

    // Costruttore che incrementa il contatore
    public Contatore() {
        contatore++;
        contatore2++;
        
    }

    // Metodo statico per visualizzare il valore del contatore
    public void mostraContatore() {
        contatore++;
        System.out.println("Valore del contatore: " + contatore);
    }

    public void mostraContatore2() {
        contatore2++;
        System.out.println("Valore del contatore2: " + contatore2);
    }

    public void mostraContatore3() {
        System.out.println("Valore del contatore3: " + contatore3);
    }
}
