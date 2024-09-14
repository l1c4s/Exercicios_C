#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i;
    printf("Digite o tamnho do vetor:\n");
    scanf("%d",&num);
    int *vetor = (int *)malloc(num*sizeof(int));

    printf("Digite os valores a serem lidos e emprimidos.\n");
    for(i=0;i<num;i++){
        scanf("%d",&vetor[i]);
    }
    printf("..................................................................................\n");
    for(i=0;i<num;i++){
        printf("%d\n",vetor[i]);
    }



    free(vetor);

    return 0;
}