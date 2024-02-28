#include <stdio.h>

int main()
{

    int i,aluno[10],maior,menor;
    float altura[10];

    for(i=0;i<10;i++){
       scanf("%d",&aluno[i]);
       scanf("%f",&altura[i]);

    }
    maior=0;
    menor=0;
    for(i=0;i<10;i++){
        if(aluno[i]>altura[maior]){
            maior = i;
        }
        if(aluno[i]<altura[menor]){
            menor = i;
        }
    }
    printf("O numero do aluno mais alto e sua altura = [%d] [%f]\n",aluno[maior],altura[maior]);


    return 0;
}

