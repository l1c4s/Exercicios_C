#include <stdio.h>

int main()
{
    int i;
    float v[10];
    float *ptr= NULL;
    
    
    
    for(i=0;i<10;i++){
        v[i]=i;
        ptr= &v[i];
        printf("elemento [%d], endereço %p\n",i,ptr);
        
    }
    

    return 0;
}
