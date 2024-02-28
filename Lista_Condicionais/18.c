#include <stdio.h>

int main()
{
    int opcao=0,n1,n2;
    
    
        
        
    
    
    do{
        printf("\nQuais das opcaoes abaixo vc quer: ");
        printf("\nSoma [1] ");
        printf("\nDivisao [2]");
        printf("\nMultiplicaçao [3]");
        printf("\nSubtraçao [4]");
        printf("\nSair do programa [5]\n");
        scanf("%d",&opcao);
        
        
        if(opcao==1){
            printf("Digite dois numeros para a soma ");
            scanf("%d%d",&n1,&n2);
            printf("\nA soma dos numeros é %d",n1+n2);
            
        }
        else if(opcao==2){
            printf("Digite dois numeros para a divisao ");
            scanf("%d%d",&n1,&n2);
            printf("\nA divisao dos numeros é %d",n1/n2);
        }
        else if(opcao==3){
            printf("Digite dois numeros para a Multiplicaçao ");
            scanf("%d%d",&n1,&n2);
            printf("\nA Multiplicaçao dos numeros é %d",n1*n2);
        }
        else if(opcao==4){
            printf("Digite dois numeros para a Subtraçao ");
            scanf("%d%d",&n1,&n2);
            printf("\nA Subtraçao dos numeros é %d",n1-n2);
        }
        
        
        
    }while(opcao!=5);

    return 0;
}
