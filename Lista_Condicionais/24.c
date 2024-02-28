/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float produto,imposto=0;
    int opcao=0;
    
    printf("Digite o valor do produto: ");
    scanf("%f",&produto);
    printf("\nDigite -> 1 para MG, imposto 7%%\n");
    printf("Digite -> 2 para SP, imposto 12%%\n");
    printf("Digite -> 3 para RJ, imposto 15%%\n");
    printf("Digite -> 4 para MS, imposto 8%%\n");
    scanf("%d",&opcao);
    
    
    switch(opcao){
        case 1:
        imposto=produto+(produto*0.07);
        printf("0 Preço do produto é %.2f",imposto);
        break;
        
        case 2:
        imposto=produto+(produto*0.12);
        printf("0 Preço do produto é %.2f",imposto);
        break;
        
        case 3:
        imposto=produto+(produto*0.15);
        printf("0 Preço do produto é %.2f",imposto);
        break;
        
        case 4: 
        imposto=produto+(produto*0.08);
        printf("0 Preço do produto é %.2f",imposto);
        break;
    }

    return 0;
}
