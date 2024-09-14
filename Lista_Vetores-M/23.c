#include <stdio.h>

#define tam 5
int main(){

    float vetor1[tam], vetor2[tam],produto;
    int i;

    printf("Preencha o vetor1 com numeros reais:\n");
    
    for ( i = 0; i < tam; i++)
    {
        scanf("%f",&vetor1[i]);
    }
    printf("Preencha o vetor2 com numeros reais:\n");
    for ( i = 0; i < tam; i++)
    {
        scanf("%f",&vetor2[i]);
    }

    printf("o produto escalar dos vetores eh:\n");

    for ( i = 0; i < tam; i++)
    {
        produto += vetor1[i]*vetor2[i];
    }
    printf("Valor escalar [%.2f]\n",produto);
    

    


    return 0;
}