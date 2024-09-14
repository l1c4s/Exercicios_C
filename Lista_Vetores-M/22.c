#include <stdio.h>

#define tam 3

int main(){

    int vet1[tam],vet2[tam],vet3[tam],i;
    
    
    printf("Digite os valores do primeiro vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet1[i]);
    }
    printf("Digite os valores do segundo vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vet2[i]);
    }
    printf("Valores pares sao do primeiro vetor, impares do segundo:\n");
    for(i=0;i<tam;i++){
        vet3[i]=0;
    }

    for(i=0;i<tam;i++){
        if(vet1[i]%2==0){
            vet3[i] = vet1[i];
        }
        
    }
    for(i=0;i<tam;i++){
        if(vet3[i]==0 && vet2[i]%2==1){ 
            vet3[i] = vet2[i];
            
        }
    }
    for(i=0;i<tam;i++){
        printf("%d\n",vet3[i]);
    }


    return 0;
}