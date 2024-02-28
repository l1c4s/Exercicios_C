#include <stdio.h>
#include <stdlib.h>
#define tam 3

struct Aluno{
    
    char nome[50];
    int idade;
    float num_matricula;
    char curso[50];
    float n1_prova ,n2_prova ,n3_prova; 
    
};


int main()
{
    struct Aluno aluno[tam];
    char *nome=NULL;
    int i,j;
    float total[tam];
    
   
    
    
    for(i=1;i<tam;i++){
        
        printf("Digite o nome do aluno:");
        scanf("%s",aluno[i].nome);
        printf("Digite o curso do aluno:");
        scanf(" %s",aluno[i].curso);
        
        printf("\nDigite a idade do %d aluno\n",i);
        scanf("%d",&aluno[i].idade);
        printf("\nDigite o numero da matricula do %d aluno\n",i);
        scanf("%f",&aluno[i].num_matricula);
        printf("Digite a 1° prova do aluno %d\n",i);
        scanf("%f",&aluno[i].n1_prova);
        printf("Digite a 2° prova do aluno %d\n",i);
        scanf("%f",&aluno[i].n2_prova);
        printf("Digite a 3° prova do aluno %d\n",i);
        scanf("%f",&aluno[i].n3_prova);
        total[i] = aluno[i].n1_prova + aluno[i].n2_prova + aluno[i].n3_prova;
        
    }
    
    for(i=1;i<tam;i++){
        
        printf("[%f]\n",total[i]);
        
    }
    
    
    
    for (i=1;i<tam;i++){
        
        printf("\n%d° aluno:%s, curso:%s",i,aluno[i].nome,aluno[i].curso);
        printf(", idade:%d, matricula:%.2f\n", aluno[i].idade, aluno[i].num_matricula);
    }
    

    

    return 0;
}

