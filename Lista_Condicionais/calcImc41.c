#include <stdio.h>

int main()
{
    float imc,peso,altura;
    printf("Quantos kilos vc tem?");
    scanf("%f",&peso);
    printf("Qual e a sua altura?");
    scanf("%f",&altura);
    imc = peso / (altura*altura);
    
    if (imc<18.5)
        printf("abaixo do peso");
    
    else if (imc>18.5 && imc<=24.9){
        printf("Saudavel");}
    
    else if(imc>=25.0 && imc<=29.9){
        printf("Peso excessivo");}
    
    else if(imc>=30.0 && imc<=34.9){
        printf("Obesidade nivel I");}
    
    else if(imc>=35.0 && imc<=39.9){
        printf("Obesidade nivel II (SEVERA)");}
    
    else if(imc>=40){
        printf("Obesidade nivel III(MORBIDA)");}
    
    
    


    return 0;
}

