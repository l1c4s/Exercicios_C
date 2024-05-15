#include <stdio.h>
#include <string.h>

void retorna_vet(char vetor[]);

int main(){
    char vetor[]="Cala a boca ja morreu";
    retorna_vet(vetor);

    return 0;
}


void retorna_vet(char vetor[]){
    char *p=vetor;
    int i=0;
    while(i<strlen(vetor)){
        printf("%c",*p);
        p++;
        i++;
    }
    putchar('\n');
}