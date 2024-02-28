

# include <stdio.h>


int main(){
    
    int vetor[6],i,soma,qtd=0;
    printf("Digite 6 numeros inteiros:\n");
    for(i=0;i<6;i++){
        scanf("%d",&vetor[i]);
                                
    }
    
    for(i=0;i<6;i++){
        if(vetor[i]%2==0){
            soma += vetor[i];              
        }
        
    }
    printf("A soma dos valores pares digitados:->%d\n",soma);
    
    printf("Numeros impares digitados:\n");
    for(i=0;i<6;i++){
        if (vetor[i]%2!=0){
                printf("->%d\n",vetor[i]);
                qtd++;
            }

}




    printf("Quantidade de valores impares digitados:%d\n",qtd);

}
