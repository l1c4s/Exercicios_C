#include <stdio.h>

int main()
{

    int a,*b=&a,**c=&b,***d=&c;
    printf("Digite um numero intero:\n");
    scanf("%d",&a);
    printf("o dobro de %d eh %d\n",a,2*(*b));
    printf("o Triplo de %d eh %d\n",a,3*(**c));
    printf("o quadruplo de %d eh %d\n",a,4*(***d));

    return 0;
}
