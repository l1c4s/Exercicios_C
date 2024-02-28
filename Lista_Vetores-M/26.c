#include <stdio.h>
#include <math.h>
#define tam 11

int main(){
	float vetor[tam],media=0.0,total,desvio_padrao;
	float somatorio;
	int i;
	for(i=1;i<tam;i++){
		scanf("%f",&vetor[i]);	
	}
	for(i=1,total=0.0;i<=tam;i++){
		total += vetor[i];
	}
	media = total/tam;
	printf("\n[%f]",media);
	for(i=1;i<tam;i++){
		somatorio += ((i-media)*(i+media));
	}
	desvio_padrao = sqrt(somatorio/tam);
	printf("\n[%f]",desvio_padrao);
	
	return 0;
}
