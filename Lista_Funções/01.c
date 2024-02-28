#include <stdio.h>

int dobro(int a){
    
    return a+a;
}

int main()
{
    int a;
    printf("digite um numero ");
    scanf("%d",&a);
    printf("o dobro do valor %d é %d",a,dobro(a));

    return 0;
}
