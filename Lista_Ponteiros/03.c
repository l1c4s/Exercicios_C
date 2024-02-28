#include <stdio.h>

int main()
{
    int i,y;
    int *ptr_i=NULL, *ptr_y=NULL;
    ptr_i= &i;
    ptr_y= &y;
    
    printf("Digite 2 numeros ");
    scanf("%d%d",&i,&y);
    
    printf("Enderço da v'i': %p\nEnderço da v'y': %p\n",ptr_i,ptr_y);
    
    if(ptr_i>ptr_y)
        printf("Conteudo da variavel'i':%d ",*ptr_i );
    else
        printf("Conteudo da variavel'y':%d ",*ptr_y );

    return 0;
}