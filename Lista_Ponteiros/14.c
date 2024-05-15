#include <stdio.h>
#define tam 3
void retorna_valor(int vetor[tam], int num);

int main(){

    int vet[tam],num=2;
    retorna_valor(vet,num);

    

    return 0;
}

void retorna_valor(int vetor[tam], int num){

    int *p_vetor=vetor;
    int i=0;
    
    

    while(i<tam){
        *p_vetor=num;
        //printf("%d\n",*p_vetor);
        *p_vetor++;
        i++;
    }
    for(i=0;i<tam;i++){
        printf("%d\n",vetor[i]);
    }

}