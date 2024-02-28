#include <stdio.h>

void tabela(){
    printf("                Tabela de Preços\n");
    printf("Preço antigo:        |   Percentual de aumento:\n");
    printf("até 50 reias.        |     5%%     \n");
    printf("entre R$ 50 a 100.   |     10%%\n");
    printf("Acima de R$ 100      |     15%%");
}


int main()
{
    float produto;
    tabela();
    printf("\nDigite o valor do produto para a atualização dos preços\n");
    scanf("%f",&produto);
    if(produto<50){
        produto=produto+(produto*0.05);
        printf("O novo valor do produto fica %f",produto);
    }
    else if(produto>=50 && produto<=100){
         produto=produto+(produto*0.10);
         printf("O novo valor do produto fica %f",produto);
         
         
    }
    else if(produto>100){
        produto=produto+(produto*0.15);
         printf("O novo valor do produto fica %f",produto);
        
    }
    

    return 0;
}
