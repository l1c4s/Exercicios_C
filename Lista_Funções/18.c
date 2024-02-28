#include <stdio.h>


int potenciacao(int x, int z);

int main(){
    int x,z;
    scanf("%d %d",&x,&z);

    printf(">>>>%d<<<<\n",potenciacao(x,z));



    return 0;
}

int potenciacao(int x, int z){

    int i;
    int pot=0;
    for(i=0;i<z;i++){
        pot = x*x;

    }


    return pot;


}