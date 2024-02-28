#include <stdio.h>

#define tam 5

int main(void){

    float vet[tam];
    int i,maior=0,menor=9999;
    float media,valor;

    for(i=0,valor=0.0;i<tam;i++){
        scanf("%f",&vet[i]);
        
        valor += vet[i];
    }
    media = valor/tam;
    for(i=0;i<tam;i++){
        //verifica o maior e menor numero do vetor;
        if(maior<vet[i]){
            maior = vet[i];
        }
        if(menor>vet[i]){
            menor = vet[i];
        }

        printf("\nTodos os valores do vetor[%.2f]",vet[i]);

    }
    printf("\nMaior elemento[%d], Menor elemento[%d]\n",maior,menor);
    printf("\nMedia dos valores do vetor[%.2f]\n",media);

    return 0;
}