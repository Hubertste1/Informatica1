/**
* \mainpage d_numeri_primi.c
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
*        Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun 
*        numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
* 
* @author Hubert Stefanski
* @date 06/12/2022
*/

#include <stdio.h>      //inclusione librerie

int main()  
{
    printf("-Esercizio D Hubert Stefanski-\n");

    //diachiaro le variabili 
    int a, b, c=1;        

    for(a=2; a<101; a++) //tutti i numeri dal 2 al 100
	{       
        
        for(b = 2; b<a; b++) //tutti i numeri dal 2 all'indice del primo ciclo
		{      
        	
            
            if(a % b == 0) //se i1 è divisibile per un numero diverso da se stesso o 1 metto la variabile di controllo a falso
                c=0;          
            
        }

        //stampo il numero solo se la varibile di controllo è su vero
        if(c) 
            printf("%d e' un numero primo \n", a);
        
        //riassegno il valore vero alla variabile di controllo 
        c=1;
    }
}
