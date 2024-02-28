#include <stdio.h>

int main()
{
    int v[5],i;
    int *ptr=NULL;
    
    
    for(i=0;i<5;i++){
    printf("\nDigite um numero na posição [%d] ",i+1);
    scanf("%d",&v[i]);
    ptr=&v[i];
     printf("\ndobro-> {%d}\n ",*ptr+v[i]);
    }
    
    

    return 0;
}
