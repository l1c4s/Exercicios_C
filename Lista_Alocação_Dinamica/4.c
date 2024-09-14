#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,i,j;
    char vetor[]={'a','e','i','o','u'};
    
    scanf("%d",&n);
    char *p=malloc(n*sizeof(char));
    char *string= (char *)malloc((n+1) * sizeof(char));
    
    scanf("%s",string);
    
    for(i=0;i<strlen(string)-1;i++){
        for(j=0;j<sizeof(vetor);j++){
            if(string[i]==vetor[j]){
                string[i]=' ';
                break;
            }
        }
       
    }
   printf("%s",string);
   
   
   free(string);

    return 0;
}


