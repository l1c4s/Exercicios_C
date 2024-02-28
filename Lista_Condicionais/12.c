#include <stdio.h>
#include <math.h>


int main()
{
    int num,logaritmo;
    printf("Digite um numero não negativo: ");
    scanf("%d",&num);
    logaritmo=log(num);
    if(num>0)
        printf("Log de %d e %d",num,logaritmo);
    
    else
        printf("Numero invalido");

    return 0;
}
