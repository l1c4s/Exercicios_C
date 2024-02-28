/*
    Este programa não foi finalizando ainda.

*/

#include <stdio.h>

#define tam 3

struct alunos{
    int matricula;
    float media_final;
    char nome[20+1];

};


int main()
{
    int i,ap=0,repe=0;

    struct alunos aluno[tam],aprovados[tam],reprovados[tam];

   for (i = 0; i < tam; i++)
{
    fgets(aluno[i].nome, 21, stdin);
    //aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';  // Remove o '\n' da string

    scanf("%d", &aluno[i].matricula);
    scanf("%f", &aluno[i].media_final);
    getchar();
}
    for(i=0;i<tam;i++)
    {
        if(aluno[i].media_final >= 5.0)
        {
            aprovados[i] = aluno[i];


        }
        else
        {
            reprovados[i] = aluno[i];


        }
    }


    for(i=0;i<tam;i++){
        printf("Reprovados:\n%s\n%d\n%2.f\n",reprovados[i].nome,reprovados[i].matricula,reprovados[i].media_final);

    }


    return 0;
}


