#include <stdio.h>

int main()
{
    float matriz[3][3];
    int i, j;
    float *ptr;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        matriz[i][j]=j;
        ptr=&matriz[i][j];
        printf("[%d] [%d] %p | ",i,j,ptr);
}
printf("\n");
}    
    

    return 0;
}