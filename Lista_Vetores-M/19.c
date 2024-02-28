#include <stdio.h>

#define tam 50

int main(){
    int i;
    int vetor[tam];
    for(i=1;i<tam;i++){
        vetor[i] = (i+5*i)%(i+1);
    }
    printf("\n");
    for(i=1;i<tam;i++){
        printf("[%d]\n",vetor[i]);
    }
    return 0;
}