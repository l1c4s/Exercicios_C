#include <stdio.h>
#define tam 3

struct Aluno{
    
    char nome[50];
    int idade;
    float num_matricula;
    char curso[50];
    
};


int main()
{
    struct Aluno aluno[tam];
    int i;
    
    for(i=1;i<tam;i++){
        printf("Digite o nome do %d aluno\n",i);
        fgets(aluno[i].nome,50,stdin);
        printf("\nDigite a idade do %d aluno\n",i);
        scanf("%d",&aluno[i].idade);
        printf("\nDigite o numero da matricula do %d aluno\n",i);
        scanf("%f",&aluno[i].num_matricula);
        printf("\nDigite o curso do %d aluno\n",i);
        fgets(aluno[i].curso,50,stdin);
        
    }
    for (i=1;i<tam;i++){
        printf("As informaçoes do %d aluno e %s, %d, %.2f, %s\n",i,aluno[i].nome,aluno[i].idade,
        aluno[i].num_matricula,aluno[i].curso);
        
    }
    

    return 0;
}

