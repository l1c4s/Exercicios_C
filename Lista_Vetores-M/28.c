#include <stdio.h>

#define tam 10
int main(){
    int i;
    int vet[tam],vet1[tam],vet2[tam];
    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }

    for(i=0;i<tam;i++){
        if(vet[i]%2==0){
            vet2[i] = vet[i];
        }
    }

    for(i=0;i<tam;i++){
        if(vet[i]%2!=0){
            vet1[i] = vet[i];
        }
    }
    putchar('\n');
    for(i=0;i<tam;i++){
        if(vet2[i]==0){
         printf("Numeros impares do vetor para o vetor1[%d]\n",vet1[i]);
    }}

    for(i=0;i<tam;i++){
        if(vet2[i]!=0){
         printf("Numeros pares do vetor para o vetor2[%d]\n",vet2[i]);
    }}

    return 0;
}