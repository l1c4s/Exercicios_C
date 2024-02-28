#include <stdio.h>

int main()
{
    int num;
    printf("Digite Um numero qualquer: ");
    scanf("%d",&num);
    
    if(num%3==0)
        printf("Numero divisilvel por 3");
        
    else if(num%5==0)
        printf("Numero divisilvel por 5");
        
    return 0;
}