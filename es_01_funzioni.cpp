

#include <stdio.h>
#include <limits.h>
//prende in input la base e l'altezza di un rettangolo e restituisce l'area
int area_rettangolo(int,int);
//prende in input due numeri interi e restituisce il loro massimo comune divisore
int MCD(int x, int y)
//prende in input un numero intero e restituisce la somma dei suoi divisori
int somma_divisori(int x)

int main()
{
	int r=0,num1,num2;
	
	/*printf("inserire la base \n");
	scanf("%d",&num1);
	printf("inserire l'altezza del rettangolo \n");
	scanf("%d",&num2);
	r=area_rettangolo(num1,num2);
	printf("%d",r);*/
	
	
	/*printf("inserire un numero \n");
	scanf("%d",&num1);
	printf("inserire un numero \n");
	scanf("%d",&num2);
	r=MCD(num1,num2);
	printf("%d",r);*/
	
	
	/*printf("Inserisci un numero: ");
    scanf("%d", &num1);
    r=somma_divisori(num1);
    printf("\nSomma dei divisori = %d\n\n", r);*/
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

