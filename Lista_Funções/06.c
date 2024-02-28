
#include <stdio.h>


int Data_conv(int n, int n1, int n2);
int main()
{
    
    int n,n1,n2;
    printf("Digite a hora:\n");
    scanf("%d",&n);
    
    printf("\nDigite o minuto:");
    scanf("%d",&n1);
    
    printf("\nDigite o segundo:");
    scanf("%d",&n2);
    
    printf("\nO valor da hora, minuto e segundo em segundo e:%d(segundos)\n",Data_conv(n,n1,n2));
    
    
    
    return 0;
}


int Data_conv(int n, int n1, int n2)
{
    int total,hora,min,seg;
    
    hora = n*3600;
    min = n1*60;
    seg = n2;
    total = hora + min + seg;
    
    return total;
    
    
}
