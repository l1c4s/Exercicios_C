#include <stdio.h>

int main()
{
    int n2,n1;
    
    
    if(&n1>&n2)
        printf("n1 [%p] maior endereço",&n1);
    
    else
        printf("n2 [%p] maior endereço",&n2);

    return 0;
}