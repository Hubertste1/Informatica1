/*
* \mainpage <es_01_funzioni_menu>
*
* @brief <funzioni>
* <Programma con all'interno diverse funzioni che possono essere scelte atraverso un menu>
* 
* @author <Hubert Stefanski>
* @date <25/01/2022> 
*/


#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/*
* @brief prende in input la base e l'altezza di un rettangolo e restituisce l'area
* @param  altezza e base
* @retval area
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
* @version 1.0 20/01/2022 prima versione
*/
int area_rettangolo(int,int);

/*
* @brief prende in input due numeri interi e restituisce il loro massimo comune divisore
* @param  due numeri
* @retval mcd
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
* @version 1.0 20/01/2022 prima versione
*/
int MCD(int x, int y);

/*
* @brief prende in input un numero intero e restituisce la somma dei suoi divisori
* @param  due numeri
* @retval somma dei divisori
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
* @version 1.0 20/01/2022 prima versione
*/
int somma_divisori(int x);

/*
* @brief mostra all'utente tutte le possibili funzioni che può utilizzare
* @param  nessun parametro
* @retval scelta effetuata dall'utente
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
* @version 1.0 20/01/2022 prima versione
*/
int menu();

int main()
{
	int r=0,num1,num2;
	do
	{
	r=menu();
	
		switch(r)
		{
			case 0: printf("fine programma");
					break;
		
			case 1:
					printf("inserire la base \n");
					scanf("%d",&num1);
					printf("inserire l'altezza del rettangolo \n");
					scanf("%d",&num2);
					r=area_rettangolo(num1,num2);
					printf("%d\n",r);
					break;
					
			case 2:
					printf("inserire un numero \n");
					scanf("%d",&num1);
					printf("inserire un numero \n");
					scanf("%d",&num2);
					r=MCD(num1,num2);
					printf("%d\n",r);
					break;
					
			case 3: 
					printf("Inserisci un numero: ");
	    			scanf("%d", &num1);
	   				r=somma_divisori(num1);
	   				printf("\nSomma dei divisori = %d\n\n", r);
	   				break;
	   		
			default:
					printf("il numero inserito non e' valido\n");
		}
	system("pause");	
	}

	while(r!=0);
}

int menu()
{
	int risp;
	
	system ("cls");
	
	printf("Digita 1 se vuoi sapere l'area di un rettangolo \n\n");
	printf("Digita 2 per trovare il massimo comune divisore di due numeri \n\n");
	printf("Digita 3 se vuoi sapere la somma dei divisori di un numero\n\n");
	printf("Digita 0 se vuoi chiudere il programma\n\n");
	
	scanf("%d",&risp);
	return risp;
	
	
}

int area_rettangolo(int x,int y)
{
	int area;
	area=x*y;
	return area;
}

 int MCD(int x, int y)
{
    float r;
    int c;

    if(y>x){
        c=x;
        x=y;
        y=c;
    }

    while(y!=0)
    {
        r = x%y;
        x=y;
        y=r;
    }

    return x;
    
}

int somma_divisori(int x)
{
    int r = 0;

    for(int i = 1; i<x; i++)
    {
        if(x%i==0) 
		r += i;
    }

    return r;
}
