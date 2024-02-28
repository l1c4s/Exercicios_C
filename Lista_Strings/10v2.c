#include <stdio.h>
#include <string.h>

int main()
{
    char v[]="toxico";
    int i,j;
    
    
    for(i=0;i<strlen(v);i++){
        
        printf("%c",v[i]);
    }
    printf("\n");
    //armazeno na variavel 'i' o tamanho da mina string
    i=strlen(v);
    
    //Percorro a string de tras pra frente enquanto 'j'>= '0';
    for(j=i;j>=0;j--){
        printf("%c",v[j]);
    }
    

    return 0;
}
