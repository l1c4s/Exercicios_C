#include <stdio.h>

#define tam 10

int primo(int x);
int main(){

    int vetor1[tam],i,divisor,j;

    printf("Digite %d elementos para o vetor:\n",tam);
    for ( i = 0; i < tam; i++)
    {
        scanf("%d",&vetor1[i]);
    }
   
    //percorre o vetor
    for ( i = 0; i < tam; i++)
    {
        if(primo(vetor1[i])==1){
            printf("O numero [%d], posicao [%d] eh primo\n",vetor1[i],i);
        }
        
    }
   
    

    return 0;
}

int primo(int x){
    int divisores=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            divisores++;
        }
    }
    if(divisores==2){
        return 1;
    }
    else{
        return 0;
    }
}