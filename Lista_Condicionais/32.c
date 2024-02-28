#include <stdio.h>

int main()
{
    int cod,qtd;
    
    
    printf("                          Cardápio do dia!!!\n");
    printf("Cachorro quente, Cod 100, Valor 1.20\nBauru Simples, cod 101, valor 1.30\n");
    printf("Bauru com ovo, Cod 102, Valor 1.40\nHambuguer, Cod 103, Valor 1.50\n");
    printf("Cheeseburquer, Cod 104, Valor 1.60\nSuco, Cod 105, Valor 1.70\n");
    printf("Refrigerante, Cod 106, Valor 1.80\n");
    
    printf("DIgite o codigo do produto desejado\n ");
    scanf("%d",&cod);
    switch(cod){
        case 100:
        printf("Cachorro quente\n");
        printf(">>>>>Valor: $1.20<<<<<\n");
        printf("Dgite a quantidade de Cachorros quentes\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.20);
        
        case 101:
        printf("Bauru simples");
        printf(">>>>>Valor: $1.30<<<<<\n");
        printf("Dgite a quantidade de Bauru\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.30);

        break;
        case 102:
        printf("Bauru com ovo");
        printf(">>>>>Valor: $1.40<<<<<\n");
        printf("Dgite a quantidade de Bauru com ovo\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.40);
        
        break;
        case 103:
        printf("Hambuguer");
        printf(">>>>>Valor: $1.50<<<<<\n");
        printf("Dgite a quantidade de Hambuguer\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.50);
        
        break;
        case 104:
        printf("Cheeseburquer");
        printf(">>>>>Valor: $1.60<<<<<\n");
        printf("Dgite a quantidade de Cheeseburquer\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.60);
        
        break;
        case 105:
        printf("Suco");
        printf(">>>>>Valor: $1.70<<<<<\n");
        printf("Dgite a quantidade de Suco\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.70);
        
        break;
        case 106:
        printf("Refrigerante");
        printf(">>>>>Valor: $1.80<<<<<\n");
        printf("Dgite a quantidade de Refrigerante\n");
        scanf("%d",&qtd);
        printf("voce pediu X%d vezes e o valor é %.2fR$",qtd,(float)qtd*1.80);
        
        break;
        
        default:printf("Codigo INvalido!!!");
    }

    return 0;
}
