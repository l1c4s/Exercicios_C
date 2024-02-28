/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



struct Horario{
        
        int hora;
        int minuto;
        int segundo;
    };


struct Data{
        int dia;
        int mes;
        int ano;
    };

struct Compromisso{
        struct Horario horario;
        struct Data data;
        char vetor[200];
        
    };

int main()
{
    struct Horario agora;
    struct Data data;
    struct Compromisso compromisso;
    
    printf("Digite a hora,minuto e segundo\n");
    scanf("%d%d%d", &agora.hora, &agora.minuto, &agora.segundo);
    printf("\nAgora digite a sua data de nascimento xx/xx/xx\n");
    scanf(" %d %d %d", &data.dia, &data.mes, &data.ano);
    
    printf("\nos daddos digitados foram %d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);
    printf("\nAs datas digitados foram %d:%d:%d", data.dia, data.mes, data.ano);
    printf("\n.........................................................................\n");
    
    
    printf("\nAgora digite o horario do seu compromisso\n");
    scanf("%d%d%d", &compromisso.horario.hora, &compromisso.horario.minuto, &compromisso.horario.segundo);
    printf("\nAgora digite o data do seu compromisso\n");
    scanf("%d%d%d",&compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano);
    
    printf("\nAgora digite o um texto do seu compromisso\n");
    scanf(" %s", compromisso.vetor);
    
    printf("\nO tesxto digitado foi '%s'\n",compromisso.vetor);
    
    

    return 0;
}
