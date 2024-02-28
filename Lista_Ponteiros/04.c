#include <stdio.h>

int troca_c(int a,int b){
    int *ptr_1 = &a, *ptr_2 = &b;
    
    
    
    ptr_1= &b;
    ptr_2= &a;
    printf("O valor de 'a':%d e o valor de 'b':%d\n ",a,b );
    
    printf("o valor de 'a':%d e o valor de 'b':%d",*ptr_1,*ptr_2);
    

    
}

int main()
{
    int a,b;
    printf("Digite dois numeros ");
    scanf("%d%d",&a,&b);
    troca_c(a,b);
    


    return 0;
}
