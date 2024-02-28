#include <stdio.h>
#include <string.h>

#define tam 255

int main()
{
    char v[tam+1];
    int i,palavra;
    
    printf("Digite um palavra:\n");
    fgets(v,tam+1,stdin);
    
    palavra=strlen(v);

    for(i=palavra;i>=0;i--){
        printf("%c",v[i]);
    }


    return 0;
}
