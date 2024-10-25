package contatore;

public class TestContatore {
    public static void main(String[] args) {
        // Creazione di tre oggetti di tipo Contatore
        Contatore a1 = new Contatore();
        Contatore a2 = new Contatore();
        Contatore a3 = new Contatore();

        // Modifica per far passare il valore della variabile statica da 4 a 6
        a1.mostraContatore(); // MOSTRA VARIABILE STATICA

        // Incremento della variabile locale
        a2.mostraContatore2(); // MOSTRA VARIABILE LOCALE

        // Mostra il valore costante
        a3.mostraContatore3(); // MOSTRA VARIABILE LOCALE FINAL CIOE' COSTANTE

        // Chiamata alla classe VisualStatic
        VisualStatic.mostraContatoreStatico();
    }
}
