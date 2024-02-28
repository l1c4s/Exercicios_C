#include <stdio.h>

int main()
{
    int n1=7,n2=6;
    int *ptr=NULL;
    int *ptr1=&n2;
    
    ptr=&n1;
    
    if(ptr>ptr1)
        printf("Endereço ptr [%p] é o maior",ptr);

    else
        printf("Endereço ptr1 [%p] é o maior",ptr1);
    return 0;
}
