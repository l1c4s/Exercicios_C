#include <stdio.h>

int main()
{
    int dia, mes, ano=0;
    
    void f_extenso();
    
    printf("Digite o dia do seu nascimento da seguinte forma: aa bb cccc\n");
    scanf("%d%d%d",&dia,&mes,&ano);
    
    f_extenso(dia,mes,ano);

    return 0;
}


void f_extenso(int dia, int mes, int ano){
    
    switch (mes)
    {
        case 01:
            printf("%d de janeiro de %d",dia,ano);
            break;
            
        case 02:
            printf("%d de fevereiro de %d",dia,ano);
            break;
            
        case 03:
            printf("%d de marco de %d",dia,ano);
            break;
            
        case 04:
            printf("%d de abril de %d",dia,ano);
            break;
        
        case 05:
            printf("%d de maio de %d",dia,ano);
            break;
            
        case 06:
            printf("%d de junho de %d",dia,ano);
            break; 
            
        case 07:
            printf("%d de julho de %d",dia,ano);
            break;
            
        case 010:
            printf("%d de agosto de %d",dia,ano);
            break;
            
        case 011:
            printf("%d de setembro de %d",dia,ano);
            break;
        
        case 10:
            printf("%d de outubro de %d",dia,ano);
            break;
            
        case 11:
            printf("%d de novembro de %d",dia,ano);
            break; 
            
        case 12:
            printf("%d de dezembro de %d",dia,ano);
            break;    
            
    };
    
        
    
    
    
}
