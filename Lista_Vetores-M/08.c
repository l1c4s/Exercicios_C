#include <stdio.h>

int main()
{
    int v[6],i;
    
	// Percorrendo um vetor de 6 posições
    for(i=0;i<6;i++){
	//adicionando nesse vetor o indice 'i' a cada ciclo
    v[i]=i;
    printf("%d\n",v[i]);
    
}
    printf("\n");
    //Percorrendo um vetor de 6 posições na ordem inversa
 for(i=5;i>=0;i--){
	//diminuindo nesse vetor o indice 'i' a cada clico
            v[i]=i;
    printf("%d\n",v[i]);
        }
    return 0;
}
