/**
* \mainpage f_conversione.c
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*        L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
*        più significativo. Il programma dovrà visualizzare il numero decimale corrispondente. 
*        Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
*        libreria math.h.
* 
* @author Hubert Stefanski
* @date 06/12/2022
*/

//inclusione librerie
#include <stdio.h>     
#include <math.h>

int main()  
{
    printf("-Esercizio F Hubert Stefanski-\n");

    
    int bit, n=0, i=7;                           //diachiaro le variabili

    printf("inserisci 8 bit\n");                 //richiedo l'inserimento di 8 bit

    do{
        scanf("%d", &bit);                       //leggo un bit alla volta

        n += pow(2, i) * bit;                    //converto il singolo bit in decimale

        i--;                                     //decremento la potenza del 2 di 1
    } while (i>-1);                              //continuo il ciclo fino a quando la potenza non raggiunge lo 0

    printf("\nConversione in binario = %d\n", n);            //scrittura risultato
}
