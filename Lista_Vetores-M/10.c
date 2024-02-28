#include <stdio.h>
#define tam 5


int main()
{
    
    int i,v[tam];
    float total=0.0;
    
    for(i=0;i<tam;i++){
        printf("Digite a nota [%d] ",i+1);
        scanf("%d",&v[i]);
         total+=v[i];
        
    }
        printf("Total: %f\n",total);
    
   total/=tam;
    printf("Media geral: %f",total);
    

    return 0;
}
