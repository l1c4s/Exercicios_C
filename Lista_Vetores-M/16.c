
#include <stdio.h>

int main()
{
    float vet[5];
    int i,codigo;
    
    printf("Digite 5 numeros reais:\n");
    for(i=0;i<5;i++){
        scanf("%f",&vet[i]);
    }
    
    printf("Digite 0, 1 ou 2 para a tarefa\n");
    scanf("%d",&codigo);
    
    switch (codigo){
        case 0: break;
        
        case 1: for(i=0;i<5;i++){
            printf("[%f]\n",vet[i]);
        }break;
        
        case 2: for(i=4;i>=0;i--){
            printf("[%f]\n",vet[i]);
        }break;
        
        default : printf("codigo invalido\n");
    }
    

    return 0;
}

