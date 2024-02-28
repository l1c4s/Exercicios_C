#include <stdio.h>

float Calc_notas(float n, float n1, float n2, char k);

int main()
{
    float n,n1,n2;
    char k;
    printf("\nDigite a nota dos 3 Semestres:\n");
    scanf("%f %f %f",&n,&n1,&n2);
    printf("Digite 'A' para media aritmetica ou 'P' para ponderada:\n");
    scanf(" %c",&k);
    if(k=='A'||k=='a')
    {
       printf("A media aritmetica das sua notas e = %.2f",Calc_notas(n,n1,n2,k)); 
    }
    else if(k=='P'||k=='p')
    {
        printf("A media ponderada das sua notas e = %.2f",Calc_notas(n,n1,n2,k)); 
    }

    return 0;
}

float Calc_notas(float n, float n1, float n2, char k)
{
    float nota;
    
    if(k=='A'||k=='a')
    {
        nota = (n+n1+n2)/3;
        return nota;
    }
    
    else if(k=='P'||k=='p')
    {
        nota = ((5*n) + (n1*3) + (n2*2))/3; 
        return nota;
    }
    
    
}

