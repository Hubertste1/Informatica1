/*
file: resto_di_una_divisione.c
autore: Hubert Stefanski
classe: 3°H
data: 05/10/2022
Il resto di una divisione tra numeri interi
Input: denominatore e numeratore
Elaborazione: resto della divisione
Output: risultato della divisione con il resto
*/
//includo le librerie
#include<stdio.h> 
#include<math.h>
 
int main()
{
	int num,den;  //input
	int ris1,ris2;  //output
  
	printf("Inserisci il numeratore: ");   //richiesta input
	scanf("%d", &num);  //lettura input
	
	printf("Inserisci il denominatore: ");   //richiesta input
	scanf("%d", &den);  //lettura input

	ris1=num/den;//divisione
	ris2=num%den;//resto
	
	printf("il risultato e' %d il resto della divisione e' %d",ris1,ris2); //stampa risultato
	// termino il programma
	return 0;
	
}
