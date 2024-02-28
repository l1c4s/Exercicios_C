#include <stdio.h>

int main()
{
    float base_menor,altura,base_maior,area;
    
    
    
    
    printf("Digite a base maior\n ");
    scanf("%f",&base_maior);
    printf("Digite a base menor\n");
    scanf("%f",&base_menor);
    printf("DIgite a altura\n");
    scanf("%f",&altura);
    // Verificando se uma das condições são verdadeiras ou falsos//
    if(base_maior<=0 || base_menor<=0){
        //caso uma das duas seja falsa:
        printf("Base maior ou menor não pode ser igual a zero\n");
    }
    else{
        //Se nenhuma das duas condições forem falsas:
    area= ((base_maior+base_menor)*altura)/2;
    printf("A area do trapezio e igual a %f",area);
}
    return 0;
}
