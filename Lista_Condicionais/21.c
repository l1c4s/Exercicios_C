#include <stdio.h>

int main(){
    int n1,n2;
	 int opcao;
	 int soma,mult,div,sub;
	 

    //soma = n1 + n2;
	 sub = n1 - n2;
	 mult = n1 * n2;
  	 div = n1 / n2;

 	printf("Digite dois numeros\n");
	 scanf("%d%d",&n1,&n2);  
	 
do{ 
	
	printf("escolha as opcões abaixo:\n\n");
	printf("_________________________________________________________\n");
	printf("1- soma 2 numeros  \n");
 	printf("2- diferença entre 2 numeros (Maior pelo menor)\n");
 	printf("3- Produto entre 2 numeros\n");
 	printf("4- Divisção entre 2 numeros (o denominador não pode ser zero\n");
	printf("5- para sair do programa");
 	
	
scanf("%d",&opcao);
	 
 	if(opcao == 1){
soma = n1 + n2;
	printf("A soma dos numeros é %d\n",soma);	 
};
 
/*
   else if (opcao == 2){
	printf("A diferença entre os dois numeros é %d\n",sub);
};

   else if(opcao == 3){
	printf("o produto dos 2 numeros e %d\n",mult);
};

  	else if(opcao == 4){
	printf("a divisão dos 2 numeros e %d\n",div);
};
*/
	printf("_________________________________________________________\n");	 	
}while(opcao == 5);







	




return 0;
}
