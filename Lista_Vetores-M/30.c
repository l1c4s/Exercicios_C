#include <stdio.h>
#define tam 3

int main(){
    int vetor[tam],vetor1[tam],vetor2[tam];
    int i,j;
    
    printf("Digite valores no primeiro vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vetor1[i]);


}
    printf("Digite valores no segundo vetor:\n");
    for(i=0;i<tam;i++){
        scanf("%d",&vetor2[i]);
}

    printf("Os valores que sao iguais nos dois vetores são:\n");

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(vetor1[i]==vetor2[j]){
                vetor[i] = vetor1[i];            
            }
        }

    }
    
    for(i=0;i<tam;i++){
    printf("%d\n",vetor[i]);
}



}




