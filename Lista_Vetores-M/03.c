#include <stdio.h>
#define TAM 5

int main()
{
    float v[TAM],x[TAM];
    int i;
    
    printf("digite 5 valores");
    for(i=0;i<TAM;i++){
        scanf("%f",&v[i]);
        v[i]*=v[i];
        x[i]=v[i];
    }
    
    printf("\n");
    for(i=0;i<TAM;i++){
        printf("%f\n",x[i]);
    }

    return 0;
}