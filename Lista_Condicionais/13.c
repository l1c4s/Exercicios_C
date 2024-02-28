#include <stdio.h>

int main()
{
    float nota1,nota2,nota3,total;
    
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    total=((nota1*1)+(nota2*1)+(nota3*2))/3;

    if(total>=6)
        printf("Aprovado");
        
    else
        printf("Reprovado");
    
    
    return 0;
}
