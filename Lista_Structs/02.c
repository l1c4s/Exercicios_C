#include <stdio.h>


struct Pessoa{
    
    char nome[200];
    int idade;
    float endereco;
    
};


int main()
{
    struct Pessoa pessoa;
    
    printf("Digite seu nome:\n");
    fgets(pessoa.nome,200+1,stdin);
    printf("Digite sua idade:\n");
    scanf("%d",&pessoa.idade);
    printf("Digite seu endereco:\n");
    scanf("%f",&pessoa.endereco);
    printf("\n.................................................\n");
    printf("O nome digitado foi %s, a idade e %d, e o endereco e %f",
     pessoa.nome, pessoa.idade, pessoa.endereco);

    return 0;
}
