#include <stdio.h>

#define tam 10

int main(){
    float vet[tam];
    int i,qtd=0;

    //entrada de valores;
    for(i=0;i<tam;i++){
        scanf("%f",&vet[i]);


        //caso os valores forem negativos ou positivos;
        if(vet[i]<0){
            qtd++;
        }else if(vet[i]>0){
            vet[i]+=vet[i];
        }   
        

    }
    for(i=0;i<tam;i++){
        //printar apenas os num(s) positivos;
        if(vet[i]>0){
        printf("\nNum... negativos[%d]\nSoma dos Num... positivos[%.2f]",qtd,vet[i]);

    }
    }
    printf("\n");

    return 0;
}