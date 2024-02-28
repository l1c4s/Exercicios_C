#include <stdio.h>
int quadrado_perfeito();

int main()
{
    int n2;
    printf("Digite um numero ");
    scanf("%d",&n2);
    printf("%d",quadrado_perfeito(n2));

    return 0;
}

int quadrado_perfeito(int n1){
    
    
    
    if(n1>0)
        return n1*n1;
        
    
    else 
        return -1;
}