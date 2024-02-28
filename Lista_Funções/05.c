#include <stdio.h>
#define pi 3.14

float v_esfera(float raio){
    float v;
    
    v=4*pi*((raio*raio*raio)/3);
    
    return v;
    
}

int main()
{
    float raio;
    printf("digite o raio");
    scanf("%f",&raio);
    printf(" o valor do volume da esfera eh %f ",v_esfera(raio));
    

    return 0;
}
