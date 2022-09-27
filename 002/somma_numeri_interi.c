/*
file: somma_numeri_interi.c
autore: Hubert Stefanski
classe: 3°H
data: 21/09/2022
somma di due interi letti da tastiera e stampa a schermo del risultato
Input: due numeri interi
Elaborazione: Somma
Output: somma degli interi
*/

//includo le librerie
#include <stdio.h>// printf, scanf

int main()
{
	//dichiaro le variabili di input
	int num1, num2;
	//e output
	int ris;
	
	//Input: due numeri interi
	printf("Inserisci il primo numero: ");
	scanf("%d",&num1); // leggo il primo numero
	
	printf("Inserisci il secondo numero: ");
	scanf("%d",&num2);// leggo il secondo numero
	
	//Elaborazione: Somma
	ris = num1 + num2;
	
	//Output: somma degli interi
	printf("La somma dei due numeri e' %d", ris);
	
	//termino il programma
	return 0;
}
