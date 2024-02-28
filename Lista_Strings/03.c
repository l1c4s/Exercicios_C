#include <stdio.h>
#define tam 20


int main() {
   
   char nome[tam],a;
   int i=0;
    
    printf("Digite o seu nome:\n ");
    scanf("%s", nome);
    
    
    if(nome[0]==('A') || nome[0]==('a')){
        
        printf("[%s]",nome);
     
}
    else 
        printf("Nome invalido");
    return 0;
}
