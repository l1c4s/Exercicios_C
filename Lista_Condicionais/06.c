#include <stdio.h>
#include <math.h>

int main()
{
    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&n1,&n2);
    
    if(n1>n2)
        printf("%d e maior. %d - %d e %d",n1,n1,n2,n1-n2);
    
    else    
       printf("%d e maior. %d - %d e %d",n2,n2,n1,n2-n1);
    
    return 0;
}