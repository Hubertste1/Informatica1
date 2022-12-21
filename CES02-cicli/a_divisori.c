/** 
* \mainpage a_divisori.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author <Hubert Stefanski>
* @date <06/12/2022>
*/

#include <stdio.h>		                       		 //includo i comandi 

int main() 
{
	printf("-Esercizio A Hubert Stefanski-\n");
	
	int n, a;			                        //dichiaro le variabili
	
	printf("Inserisci un numero: ");	        	//richiesta input del numero
	scanf("%d", &n);
	
	for(a = 2; a < n; a++)		                
	{
		if(n%a==0)					//controllo se l'indice e' un divisore
			printf("%d e' un divisore\n", i);		
	}	
}
