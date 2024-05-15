#include <stdio.h>

void str(char *string1,char *string2);

int main(){

    char *str1="calaaboca",*str2="cal";
    str(str1,str2);
    return 0;
}


void str(char *string1,char *string2){

    while(*string1){
        if(*string2==*string1){
            printf("String2 esta na string1\n");
            
        }
        string1++;
        
    }

   

}