#include <stdio.h>
#define tam 10

int main(){
    int i;
    int A[tam],B[tam],C[tam];
    for(i=0;i<tam;i++){
        scanf("%d",&A[i]);
    }
    printf("\n");

    for(i=0;i<tam;i++){
        scanf("%d",&B[i]);
    }

    for ( i = 0; i < tam; i++)
    {
        C[i] = A[i] * B[i];
    }

    printf("\n");
    
    for ( i = 0; i < tam; i++)
    {
        printf("[%d]\n",C[i]);
    }
    



    return 0;
}