#include <stdio.h>

#define tam 4

void vetor(int vet[]);

int main(){

    int i,cont=0,j;
    int vet[tam],iguais[tam];

    for(i=0;i<tam;i++){
        scanf("%d",&vet[i]);
    }
    vetor(vet);
    printf("\n");


    return 0;
}

void vetor(int vet[]){
    int i,j;
    
    for(i=0;i<tam;i++){
        for(j=i+1;j<10;j++){
            if(vet[i]==vet[j]){
                printf("\n[%d]",vet[j]);
            }
        }

    }



}