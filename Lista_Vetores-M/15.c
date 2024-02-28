#include <stdio.h>


#define tam 4


void retorna_vetor(int vetor[]);

int main()
{
	int vetor[tam],i;
	
	for(i=0;i<tam;i++)
	{
		scanf("%d",&vetor[i]);
	}
	retorna_vetor(vetor);


	return 0;
}


void retorna_vetor(int vetor[])
{
	int i,vet[tam],j;
	
	for(i=0;i<tam;i++)
	{
		for(j=i+1;j<tam;j++)
		{
			if(vetor[i]==vetor[j])
			{
				vetor[i]=0;
			}
		}		
	}
	for(i=0;i<tam;i++)
	{
		if(vetor[i]!=0){
			printf("[%d]\n",vetor[i]);
		}
	}
}






