#include <stdio.h>

int main (void)
{
	int i,num[6];
	
	for (i = 0; i < 6 ; i++)
	{
		printf("\nDigite 6 numeros pares:\n");
		
			scanf("%d",&num[i]);
		
		
	}
	for (i = 5; i >= 0; i--)
	{
		printf("[%d]\n",num[i]);
		
	}
	
	
	return 0;
}
