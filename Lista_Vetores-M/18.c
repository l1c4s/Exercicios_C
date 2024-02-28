#include <stdio.h>


#define tam 11

int main(){
    int vetor[tam];
    int x,i;
    scanf("%d",&x);
    for(i=1;i<tam;i++){
        vetor[i] = x*i;
        
    }
    for(i=1;i<tam;i++){
        printf("[%d]\n",vetor[i]);
    }


    return 0;
}