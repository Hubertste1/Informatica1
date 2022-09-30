/*
file: aera_cerchio.c
autore: Hubert Stefanski
classe: 3°H
data: 30/09/2022
L'area di un cerchio 
Input: raggio cerchio
Elaborazione: formula dell'area
Output: area del cerchio
*/
//includo le librerie
#include<stdio.h>
#define PI_GRECO 3.14
int main()
{
	//dichiaro le variabili di input
	int num1;
	
	//e output
	float area;
	
	//Input: raggio 
	printf("Inserisci il raggio del cerchio: ");
	scanf("%d",&num1);
	
	area= num1 * num1 * PI_GRECO;
	
	//Output: area del cerchio
	printf("L'area del cerchio e' %.2f", area);
	
	// termino il programma
	return 0;
	
}
