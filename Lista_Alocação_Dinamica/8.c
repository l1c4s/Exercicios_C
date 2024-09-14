#include <stdio.h>
#include <stdlib.h>

int main(){

    int val=1500,i;
    int *vetor = (int *)calloc(val,sizeof(int));

    for(i=0;i<val;i++){
        if(vetor[i]!=0){
            printf("Calloc não funcionou bem\n");
            break;
        }        
    }

    for(i=0;i<val;i++){
        vetor[i]=i;
    }
    for(i=0;i<val;i++){
        if(i<10){
            printf("%d\n",vetor[i]);
        }
        else if(i>1489){
            printf("%d\n",vetor[i]);
        }
    }
    free(vetor);
    return 0;
}