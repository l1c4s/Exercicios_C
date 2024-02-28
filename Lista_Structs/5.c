

#include <stdio.h>

struct Vetor3{
    float i,j,k;

};

typedef struct Vetor3 Vetor;

int main(){
    int i;
    Vetor vetor,vetor1,vetsoma;
    
    printf("Digite 3 numeros para as coodernadas do vetorR3:\n");
    scanf("%f%f%f",&vetor.i,&vetor.j,&vetor.k);

    printf("Digite 3 numeros para as coodernadas do segundo vetorR3:\n");
    scanf("%f%f%f",&vetor1.i,&vetor1.j,&vetor1.k);

    vetsoma.i = vetor.i+vetor1.i;   
    vetsoma.j = vetor.j+vetor1.j;  
    vetsoma.k = vetor.k+vetor1.k; 

    printf("A soma dos dois vetoresR3(i,j,k) eh:\nVetor(%.2f,%.2f,%.2f)\n",vetsoma.i,vetsoma.j,vetsoma.k);


    return 0;
}