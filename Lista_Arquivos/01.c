#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE *file;
	char ch;
	
	file = fopen("arq.txt","w");
	
	if(file==NULL){
		printf("Impossível inicializar o arquivo:\n");
		exit(1);
	
	}
	
	while(ch != '0'){
		
	scanf(" %c",&ch);
		if(ch != '0'){
			fprintf(file,"%c",ch);
		}
	
	
	}
	fclose(file);
	
	
	
	
	return 0;
}
