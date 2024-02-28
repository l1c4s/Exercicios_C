#include <stdio.h>

int main(){
	
	//cria um vetor com 5 elementos
	int vetor[5];
	// cria um indice, atribui a variavel maior o valor 0 e a menor o valor 9999
	int i,maior=0,menor=9999;
	
	printf("\nDigite 5 valores para o vetor:\n");
	
	//for para ler do usuario os elementos
	for(i=0;i<5;i++){
	scanf("%d",&vetor[i]);
	}
	
	for(i=0;i<5;i++){
		//se o maior for menor que o vetor na posiçao i
		if(maior<vetor[i]){
			//maior recebe o valor do vetor na posiçao i
			maior = vetor[i];
		}
		//se i menor for maior que o vetor na posição i
		if(menor>vetor[i]){
			//menor recebe o valor do vetor na posição i
			menor = vetor[i];
		}
	}
	printf("Menor:%d\n",menor);
	printf("Maior:%d\n",maior);
	
	return 0;
}
