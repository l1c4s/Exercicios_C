#include <stdio.h>

int verificar_num(int a){
    
    if(a>0)
        return 1;
    else
        return -1;
}


int main()
{
    int a;
    printf("digite num");
    scanf("%d",&a);
    printf("%d",verificar_num(a));
    
    return 0;
}
