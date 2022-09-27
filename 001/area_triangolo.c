#include<stdio.h>

int main()
{
	//dichiaro le variabili in input
	float base,altezza;
	//dichiaro le variabili in output
	float area;
	//input: base e altezza del triangolo
	printf("inserisci la base del triangolo: ");
	
	scanf("%f",&base);
	
	printf("inserisci l'altezza del triangolo: ");
	
	scanf("%f",&altezza);
	// elaborazione: area
	area = base * altezza / 2;
	//output: area del triangolo
	printf("l'area del triangolo e'%f",area);
	// termino il programma
	return 0;
}
