#include <stdio.h>

int main()
{
    int num,soma=0;
    printf("Digite um numero maior que zero: ");
    scanf("%d",&num);
    
    if(num>0){
    while(num!=0){
        soma=soma+(num%10);
        num=num/10;
        
    }
    printf("%d",soma);
}
    else
        printf("Numero invalido");
    

    return 0;
}
