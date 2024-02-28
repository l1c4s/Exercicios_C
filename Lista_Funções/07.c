
#include <stdio.h>

float Conv_c_emF(float c);

int main()
{
    
    float c;
    printf("\nDigite a temperatura em graus celsius que deseja converter:");
    scanf("%f",&c);
    printf("\nA temperatura %.1f em fahrenheit e %.3f", c, Conv_c_emF(c));
    
    
    
    return 0;
}

float Conv_c_emF(float c)
{
    
    float fahrenheit;
    
    fahrenheit = c * (9.0/5.0) + 32.0;
    
    
    return fahrenheit;
}


