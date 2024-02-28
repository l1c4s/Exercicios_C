#include <stdio.h>

int main()
{
   int vetor[]={01, 0, 5, 100, -5, 7};
   int soma;
   soma= vetor[0]+vetor[1]+vetor[5];
   int i;
   printf("%d\n",soma);
   
   for(i=0;i<=5;i++){
       
       printf("%d\n",vetor[i]);
   }

    return 0;
}
