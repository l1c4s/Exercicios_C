#include <stdio.h>

int main()
{
    float salario,emprestimo,valor_emprestimo;
    
    printf("Digite o seu salario: ");
    scanf("%f",&salario);
    printf("\n");
    printf("Digite o valor de emprestimo: ");
    scanf("%f",&valor_emprestimo);
    
    emprestimo=(salario*20)/100;
    
    if(valor_emprestimo>emprestimo)
        printf("emprestimo nao concedido");
        
    else
        printf("emprestimo concedido");
    

    return 0;
}
