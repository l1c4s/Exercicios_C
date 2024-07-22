#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,i;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d",&num);
    int *vetor=(int*)malloc(num*sizeof(int));

    printf("\nDigite os valores do vetor:\n");
    for(i=0;i<num;i++){
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<num;i++){
        if(vetor[i]%2==0)
        printf("Valor par %d\n",vetor[i]);

        else{
            printf("Valor impar %d\n",vetor[i]);
        }
    }

    return 0;
}