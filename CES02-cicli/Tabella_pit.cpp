#include <stdio.h>

int main()
{
	int a,b,prodotto = 1;
	
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=10;b++)
		{
		prodotto=a*b;
		printf(" %3d ",prodotto);
		}
		printf("\n");
	
	}
}




