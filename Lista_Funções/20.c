#include <stdio.h>

int fatorial(int x);

int main(){
    int x,z;
    scanf("%d",&x);
    printf("%d",fatorial(x));


    return 0;
}

int fatorial(int x){
    int i;
    int fat=0;
    if(x==0){
       return x=1;
    }
    
    return x*fatorial((x-1));  
    
    
}