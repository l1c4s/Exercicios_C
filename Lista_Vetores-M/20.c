#include <stdio.h>

int main()
{
   int i,n, vetor1[10],vetor[10];

   printf("Digite numeros entre 0 e 50\n");
   for(i=0;i<10;i++){
     scanf("%d",&vetor[i]);
     if(vetor[i]>=0 && vetor[i]<=50){
        n = vetor[i];
        vetor[i] = n;

        }else{
            printf("\nNumero invalido\n");
            break;
            }
    }
    for(i=0;i<10;i++){
        if(vetor[i]%2==1){
        vetor1[i] = vetor[i];

     }


    }

    for(i=0;i<10;i++){
        printf("vet[%d]",vetor[i]);
        printf("vet1[%d]",vetor1[i]);
        printf("\n");



    }

    printf("\n");






    return 0;
}

