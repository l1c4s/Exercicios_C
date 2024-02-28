#include <stdio.h>	

#define tam 2

struct Endereco
{
	int endereco,telefone;
	char *nome;

}addr[tam];


int main ()
{
	int i,j,iaux;
    char *aux;

	for(i=0;i<tam;i++){
		scanf(" %s",addr[i].nome);		
        scanf("%d",&addr[i].endereco);
		scanf("%d",&addr[i].telefone);
	
	}
	
	for(i=0;i<tam;i++){
		for(j=i+1;j<tam;j++){
            if(addr[i].nome>addr[j].nome)
            {
                aux = addr[i].nome;
                addr[i].nome = addr[j].nome;
                addr[j].nome = aux;

                
            }
        }
	}	

    for(i=0;i<tam;i++){
        printf("\nNome:%s, ",addr[i].nome);
        printf("Endereco:%d, Telefone:%d",addr[i].endereco,addr[i].telefone);
    }
    printf("\n");

	
	
	
	return 0;
}