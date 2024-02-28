#include <stdio.h>

int vetorM(int vetor[]);

int main()
{
    int vet[]={3,2,1};
    
    printf("%d<<<<",vetorM(vet));

    return 0;
}

int vetorM(int vetor[]){
    int i;
    int m=0;
    for(i=0;i<3;i++){
        if(m<vetor[i]){
            m=vetor[i];
        }
    }
    
    return m;
}
