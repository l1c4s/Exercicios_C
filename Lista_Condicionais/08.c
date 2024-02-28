#include <stdio.h>


int main()
{
    float n1,n2,total;
    printf("Digite a primeira nota aluno: ");
    scanf("%f",&n1);
    
    printf("Digite a segunda nota aluno: ");
    scanf("%f",&n2);
    
    if (n1>=0 &&n2>=0 && n1<=10 &&n2<=10){
        total=(n1+n2)/2;
        printf("A media do aluno é %.3f",total);
        
    }
        
    else
        printf("Nota possui valor invalido");
    
    return 0;
}
