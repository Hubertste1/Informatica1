/** 
* \mainpage b_coppie_som_15.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali 
*        la cui somma è 15. 
* 
* @author <Hubert Stefanski>
* @date <06/12/2022>
*/

#include <stdio.h>                                      //inclusione librerie

int main() 
{
	int a, b;                                           //dichiaro le variabili

	printf("-Esercizio B Hubert Stefanski-\n");

    for(a=1; a<8; a++)                                  //iterazione primo addendo 

        for(b=1; b<15; b++)                             //iterazione secondo addendo

            if(a+b==15)                                 //stampa risultato se la somma e' 15
                printf("%d e %d\n", a, b);
}
