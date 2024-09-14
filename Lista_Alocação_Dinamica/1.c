
//Falta terminar a questão
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor=(int*)malloc(5*sizeof(int));
    
    int i;
   
    
    for( i=0;i<5;i++){
       scanf("%d",&vetor[i]);
    }
    
    for(i=0;i<5;i++){
        printf("%d\n",vetor[i]);
    }
    
    free(vetor);
    

    return 0;
}

