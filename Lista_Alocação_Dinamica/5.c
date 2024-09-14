#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,x,i;
    printf("Digite o tamnaho do vetor\n");
    scanf("%d",&num);
    int *vetor = malloc(num* sizeof(int));
    printf("Digite os valores do vetor\n");

    for(i=0;i<num;i++){
        scanf("%d",&vetor[i]);
    }
    
    printf("Digite um numero\n");
    scanf("%d",&x);
    printf("Os multiplos do numero %d são estes:\n",x);
    for(i=0;i<num;i++){
        if(vetor[i] % x==0  ){
            printf("%d\n",vetor[i]);
        }
    }

    return 0;
}
