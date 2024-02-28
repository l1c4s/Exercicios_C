#include <stdio.h>
#include <math.h>

int main()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    
    if(n1%2==0)
        printf("%d e par",n1);
    
    else    
        printf("%d e impar",n1);
    
    return 0;
}
