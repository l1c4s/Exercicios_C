#include <stdio.h>

float comisao(float din, float p_das_vendas){
    
    float venda;
    venda=din+(din* p_das_vendas);
    
    return venda;
    
    
}

int main()
{
    float ivenda;
    printf("digite o valor da venda");;
    scanf("%f",&ivenda);
    if(ivenda>=100000){
        ivenda+=comisao(700,0.16);
        printf("Valor da venda %f",ivenda);
    }
    else if(ivenda <100000 && ivenda>= 80000){
        ivenda+=comisao(650,0.14);
         printf("Valor da venda %f",ivenda);
    }
    else if(ivenda<80000 && ivenda>=60000){
        ivenda+=comisao(600,0.14);
        printf("Valor da venda %f",ivenda);
    }
    else if(ivenda<60000 && ivenda>=40000){
         ivenda+=comisao(550,0.14);
        printf("Valor da venda %f",ivenda);
    }
    else if(ivenda<40000 && ivenda>=20000){
         ivenda+=comisao(500,0.14);
        printf("Valor da venda %f",ivenda);
    }
    else if(ivenda<20000){
        ivenda+=comisao(400,0.14);
        printf("Valor da venda %f",ivenda);
    }

    return 0;
}