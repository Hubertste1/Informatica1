/*
file: media_tre_numeri.c
autore: Hubert Stefanski
classe: 3°H
data: 21/09/2022
La media di tre numeri 
Input: due numeri interi
Elaborazione: Somma
Output: somma degli interi
*/
//includo le librerie
#include<stdio.h>

int main()
{
	//dichiaro le variabili di input
	float num1,num2,num3;
	
	//e output
	float media;
	
	//Input: tre numeri 
	printf("Insrisci primo numero: ");
	scanf("%f",&num1);
	
	printf("Insrisci secondo numero: ");
	scanf("%f",&num2);
	
	printf("Insrisci terzo numero: ");
	scanf("%f",&num3);
	
	//Elaborazione: media
	media= (num1 + num2 + num3) / 3;
	
	//Output: media dei numeri
	printf("La media dei tre numeri e'%.2f", media);
	
	// termino il programma
	return 0;
	
}
