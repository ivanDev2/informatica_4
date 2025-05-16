/* Calcolatrice senza prompt: modifica i valori qui sotto per testare */
let num1 = 10;         // Inserisci il primo numero
let num2 = 5;          // Inserisci il secondo numero
let operazione = "+";  // Inserisci l'operazione: "+", "-", "*", "/", "**"

// Converte i numeri da stringa a numero (se necessario)
num1 = Number(num1);
num2 = Number(num2);

// Verifica se i numeri sono validi
if (Number.isNaN(num1) || Number.isNaN(num2)) {
    console.log("Errore: uno o entrambi i numeri non sono validi.");
} else {
    let risultato;
    switch (operazione) {
        case "+":
            risultato = num1 + num2;
            break;
        case "-":
            risultato = num1 - num2;
            break;
        case "*":
            risultato = num1 * num2;
            break;
        case "/":
            if (num2 === 0) {
                console.log("Errore: divisione per zero.");
                break;
            }
            risultato = num1 / num2;
            break;
        case "**":
            risultato = num1 ** num2;
            break;
        default:
            console.log("Errore: operazione non valida.");
    }
    if (risultato !== undefined) {
        console.log(`Il risultato è: ${risultato}`);
    }
}