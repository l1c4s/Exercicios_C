#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Digite 3 valores\n");scanf("%d%d%d",&a,&b,&c);
    
    if(a!=0 && b!=0 && c!=0){
        
        if(a==b==c){
            printf("Triangulo equilatero");
        }
        else if(a==b && b!=c || b==c && c!=a || a==c && c!=b){
            printf("Triangulo Isósceles");
        }
        else if(a!=b!=c){
            printf("Triangulo escaleno");
        }
        
    }printf("Um Triangulo deve ter vaor maior que zero");
    
    
}