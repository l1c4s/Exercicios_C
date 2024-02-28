#include <stdio.h>

int main()
{
    int v[10],i;
    for(i=0;i<10;i++){
        v[i]=i;
        
        printf("%d\n",v[i]);
    
    }
        puts("\n");
        
     for(i=0;i<10;i++){
         if((v[i]%2)==0)
        printf("Pares: %d | indice: %d\n ",v[i],i+1);
        
        
        
     }   
    
    
        
    return 0;
}
