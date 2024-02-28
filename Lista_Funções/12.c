#include <stdio.h>

int Soma(int num);

int main(){
	int num;
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("\nNumero invalid:");
	}
	else
	{
	
	printf("\n\n[%d]",Soma(num));
		

	}
	
	
	return 0;
}


int Soma(int num){
	int soma,modulo;
	
	while(num!=0){
		modulo = num % 10;
		soma+=modulo;
		num/=10;
	}
	
	return soma;
}
