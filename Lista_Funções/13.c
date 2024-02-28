#include <stdio.h>


int operacoes(int n1, int n2, char simb);

int main()
{
    int n1, n2;
    char simb;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d",&n1,&n2);
    printf("Digite '+'Para somar,'-'Para subtrair,'*'Para multiplicar,'/'Para dividir\n");
    scanf(" %c",&simb);
    printf("Resultado da operacao:\n%d\n\n",operacoes(n1,n2,simb));


    return 0;
}

int operacoes(int n1, int n2, char simb){

    int res;

    if(simb=='+'){
        res = n1+n2;
        return res;
    }
    else if(simb=='-'){
        res = n1-n2;
        return res;
    }
    else if(simb=='*'){
        res = n1*n2;
        return res;
    }
    else if(simb=='/'){
        res = n1/n2;
        return res;
    }

    return -1;

}