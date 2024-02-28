#include <stdio.h>

int main()
{
    
	//criado ponteiros para cada variavel criada
    int *ptr_n1,n1=5;
	//ponteiro recebe o enderço de memoria da variavel 'n1'
    ptr_n1=&n1;
    float *ptr_n2,n2=2.5;
	//ponteiro recebe o enderço de memoria da variavel 'n2'
    ptr_n2=&n2;
    char *ptr_ch,ch='b';
	//ponteiro recebe o enderço de memoria da variavel 'ch'
    ptr_ch=&ch;
	//Print do valor que o ponteiro aponta, e o valor que o ponteiro aponta +1
    printf("%d | %d\n\n",*ptr_n1,*ptr_n1+1);
	/Print do valor que o ponteiro aponta, e o valor que o ponteiro aponta +2.3
    printf("%f | %f\n\n",*ptr_n2,*ptr_n2+2.3);
	/Print do valor que o ponteiro aponta, e o valor que o ponteiro aponta +1
    printf("%c | %c\n\n",*ptr_ch,*ptr_ch+1);

    return 0;
}
