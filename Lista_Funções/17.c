#include <stdio.h>


int somaN(int n1, int n2);

int main()
{
    int n1,n2;
    printf("Digite dois numeros inteiros para somar os numeros entre eles:\n");
    scanf("%d%d",&n1,&n2);

    printf("%d\n\n",somaN(n1,n2));


    return 0;
}


int somaN(int n1, int n2)
{
    int i=0;
    int num=0;
    if (n1 > n2) {

        for(i=n2+1;i<n1;i++){
            
            num = num +i ;
            

        }
        return num;

    } else if (n2 > n1) {
        for(i=n1+1;n2>i;i++){
            
            num = num + i ;
            

        }
        return num;

    } else {
        return 0;
    }

}