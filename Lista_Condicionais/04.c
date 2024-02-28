#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    
    printf("Digite um numero ");
    scanf("%f",&x);
    
    
    if(x>0){
    printf("0 valor de %.2f ao quadrado é %.2f\n",x,x*x);
    printf("A raiz quadrado do numero %.2f é %.2f",x,sqrt(x));
}
    else
        printf("Valor menor ou igual a zero. Tente de novo""");

    return 0;
}
