#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE *file;
	char letra;
	
	file = fopen("tes.txt","r");
	printf("Crie um arquivo e escreva nele pra ser lido.Obs: tes.txt\n");
		while(!feof(file)){
			letra =fgetc(file);
			printf("%c",letra);
		}
	
	
	
		fclose(file);
	
	
	
	return 0;
}