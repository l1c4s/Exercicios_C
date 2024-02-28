#include <stdio.h>

void desenhar(int num);

int main()
{
    int num;

    printf("Insira um numero inteiro para desenhar '='s na tela:\n");
    scanf("%d",&num);
    desenhar(num);
    printf("\n\n");

    return 0;
}

void desenhar(int num)
{
    for(int i=0; i<num;i++){
        printf("=");
    }




}