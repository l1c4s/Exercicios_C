#include <stdio.h>
#include <stdlib.h>

int main(){

    int linha,coluna,i,j;
    

    printf("Digite os paramentros da matriz\n");
    scanf("%d%d",&linha,&coluna);
    //se cria um ponteiro para ponteiros(matriz no caso) e aloca dinamicamente 
    //o numero de ponteiros(linhas) na variavel 'matriz'
    
    int **matriz = malloc(linha*sizeof(int*));
    int *vetor = malloc(linha*coluna*sizeof(int));

    //aloca no indice 'linha' valores inteiros para a coluna
    for(i=0;i<linha;i++){
        matriz[i]= malloc(coluna*sizeof(int));
    }

    printf("Preencha a matriz com valores inteiros:\n");

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(matriz[i][j]>matriz[i][j+1]){
               vetor[i] = matriz[i][j];
            }
            
        }
        printf("\n");
    }

   

    free(matriz);
    return 0;
}


