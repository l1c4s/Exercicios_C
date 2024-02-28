#include <stdio.h>
#define TAM 100


int str1(char frase[]){
    
    int i=0;
    
    while(frase[i]!='\0'){
        ++i;
        
    }
    
    return i;
}


int main() {
    char str[TAM];
    int i=0;
    printf("Digite uma palavra qualquer\n");
    scanf("%s", str);
    i=str1(str);
    
    
    
    
    printf("%d",i);
    return 0;
}
