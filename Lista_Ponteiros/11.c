/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[5], *p_vetor,i;
    
    printf("escreva 5 numeros ");
    
    for(i=0;i<5;i++){
        
        scanf("%d", &vetor[i]);
        
    }
   
    
  
        
        for(i=0;i<5;i++){
             p_vetor=&vetor[i];
             
            if (*p_vetor%2==0){
            printf("-> %d |%p\n", *p_vetor,p_vetor);}
        }
    
    

    return 0;
}
