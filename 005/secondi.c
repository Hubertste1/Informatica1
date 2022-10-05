/*
file: secondi.c
autore: Hubert Stefanski
classe: 3°H
data: 05/10/2022
secondi
Input: secondi
Elaborazione: calcolo ore, minuti e secondi
Output: ore, minuti e secondi
*/
//includo le librerie
#include<stdio.h> 
#include<math.h>
 
int main()
{
	int secondi;  //input
	int ore, minuti;  //output
  
	printf("Inserisci il numero di secondi: ");   //richiesta input
	scanf("%d", &secondi);  //lettura input
  
	minuti = (secondi - secondi % 60) / 60; //calcolo minuti totali
	ore = (minuti - minuti % 60) / 60;  //calcolo ore
	secondi = secondi % 60;   //calcolo minuti effettivi
	minuti = minuti % 60;     //calcolo secondi effettivi
	
	printf("Ore: %d, Minuti: %d, Secondi: %d", ore, minuti, secondi); //stampa risultato
	// termino il programma
	return 0;
	
}
