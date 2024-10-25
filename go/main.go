package main

import (
	"fmt"
	"os"
	"strconv"
	"sort"
)

// HammingDistance calcola la distanza di Hamming tra due stringhe
// confrontando solo le lettere nelle stesse posizioni delle due stringhe fino alla lunghezza della stringa più corta
func HammingDistance(s1, s2 string) int {
	// Trova la lunghezza minima tra le due stringhe
	minLen := len(s1)
	if len(s2) < minLen {
		minLen = len(s2)
	}

	distance := 0
	// Confronta i caratteri delle due stringhe fino alla lunghezza minima
	for i := 0; i < minLen; i++ {
		if s1[i] != s2[i] {
			distance++
		}
	}

	return distance
}

func main() {
	// Controlla se ci sono abbastanza argomenti
	if len(os.Args) < 3 {
		fmt.Println("Uso: go run main.go <soglia> <stringa1> <stringa2> ...")
		return
	}

	// Leggi la soglia dalla riga di comando
	soglia, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Println("Errore: la soglia deve essere un intero.")
		return
	}

	// Leggi le stringhe dalla riga di comando
	strings := os.Args[2:]

	// Ordina le stringhe in ordine lessicografico
	sort.Strings(strings)

	// Trova tutte le coppie di stringhe con distanza di Hamming inferiore alla soglia
	for i := 0; i < len(strings); i++ {
		for j := i + 1; j < len(strings); j++ {
			s1 := strings[i]
			s2 := strings[j]

			// Calcola la distanza di Hamming
			distance := HammingDistance(s1, s2)

			// Se la distanza è minore della soglia, stampa la coppia
			if distance < soglia {
				fmt.Println(s1, s2)
			}
		}
	}
}
