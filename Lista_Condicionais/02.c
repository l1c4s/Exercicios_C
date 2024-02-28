#include <stdio.h>
#include <math.h>

int main()
{
    float n1;
    printf("Digite um numero: ");
    scanf("%f",&n1);
    
    if(n1>0)
        printf("A raiz quadrada de %.3f e %.3f",n1,sqrt(n1));
    
    else    
        printf("Numero invalid");
    
    return 0;
}
