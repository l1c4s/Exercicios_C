
#include  <stdio.h>
#define tam 3

struct Alunos
{
    //int alunos[tam];
    float nota1,nota2,media;
    char nome[15+1];
    int codigo_matricula,codigo_disciplina;
};
typedef struct Alunos alunos; 


int main(){

    alunos alunos1[tam];    
    int i;
    printf("Insira os dados dos alunos:\n");
    for (i = 0; i < tam; i++)
    {
        printf("Insira o nome do %d aluno:\n",i+1);
        scanf("%s",alunos1[i].nome);
        printf("Digite as notas do %d aluno:\n",i+1);
        scanf("%f%f",&alunos1[i].nota1,&alunos1[i].nota2);
        printf("Digite o codigo da matricula do %d aluno:\n",i+1);
        scanf("%d",&alunos1[i].codigo_matricula);
        printf("Digite o codigo da disciplina do %d aluno:\n",i+1);
        scanf("%d",&alunos1[i].codigo_disciplina);
        alunos1[i].media = (alunos1[i].nota1*1 + alunos1[i].nota2*2)/2;

    }
    printf("\n");

    for ( i = 0; i < tam; i++)
    {

        printf("Nome aluno: %s\nNota1 aluno: %.2f\nNota2 aluno: %.2f\n",alunos1[i].nome,alunos1[i].nota1,alunos1[i].nota2);
        printf("Codigo da matricula: %d\nCodigo da disciplina: %d\n",alunos1[i].codigo_matricula,alunos1[i].codigo_disciplina);
        printf("Media final do %d aluno: %.2f\n",i+1,alunos1[i].media);
        printf(".......................................................................................................\n");
    }
    
    




    return 0;
}