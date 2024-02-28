#include <stdio.h>

int main()
{
    float peso,altura;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite 'M' para masculino ou 'F' para feminino: ");
    scanf(" %c",&sexo);
    
    
    if(sexo=='m'||sexo=='M'){
    peso=(72.7*altura)-58;
    printf("Seu peso ideal é %.3f",peso);
}
    else if(sexo=='f'||sexo=='F'){
        peso=(62.1*altura)-44.7;
        printf("Seu peso ideal é %.3f",peso);
    }
    return 0;
}
