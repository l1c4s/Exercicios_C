#include <stdio.h>
#define tam 5
int main()
{
    
    int v[tam],i;
    
    
    for(i=0;i<tam;i++){
        printf("Digite o numero [%d]:  ",i);
        scanf("%d",&v[i]);
        
        if(v[i]<0)
            v[i]=0;
        
      
    }
    printf("\n");
    for(i=0;i<tam;i++){
        printf("Posição:[%d]=> {%d} \n",i,v[i]);
    }
    

    return 0;
}
