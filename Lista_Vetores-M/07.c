#include <stdio.h>
#define tam 4

int repeticao(int v[tam]);

int main()
{
    int vetor[tam];
   
  
    repeticao(vetor);
    
    
    

    return 0;
}


int repeticao(int v[tam]){
    
    for(int i=0;i<tam;i++){
        printf("Digite o [%d] Num ",i+1);
        scanf("%d",&v[i]);
    }
    
    
}
