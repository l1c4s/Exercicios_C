#include <stdio.h>
#define tam 10


int main()
{
    int i, vetor[tam],maior=0,menor=99999;
    
    
    printf("\nDigite %d valores para o vetor\n",tam);
    
    for(i=0;i<tam;i++)
    {
        scanf("%d",&vetor[i]);
        
    }
    
    for(i=0;i<tam;i++){
        
    if(menor>vetor[i]){
        menor = vetor[i];
    }
   if(maior<vetor[i]){
        maior = vetor[i];
    }
   
    
    }
    printf("\nMenor[%d], Maior[%d]\n",menor, maior);
    return 0;
}

