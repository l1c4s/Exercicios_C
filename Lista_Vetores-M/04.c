#include <stdio.h>
#define tam 3
int main()
{
    int v[tam],i,y,x;
    printf("digite 5 numeros ");
    for(i=0;i<tam;i++){
        scanf("%d",&v[i]);
    }
    printf("Digite dois numeros ");
    scanf("%d%d",&x,&y);
    
    printf("Os valores %d e %d serão somados no vetor ",x,y);
    
    
    printf("%d e %d ",v[1]+=x,v[2]+=y);
    
    
    
    
    return 0;
}
