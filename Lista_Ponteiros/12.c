/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int ord(int p1,int p2, int p3){
    
    int *ptr_q=NULL,*ptr_w=NULL,*ptr_z=NULL;
    
    
    

    if(p3<p2&&p2<p1){
        
        ptr_q=&p3;
        ptr_w=&p2;
        ptr_z=&p1;
        
        printf("  [var 3]==value ->[%d]\n <[var 2]==value ->[%d]\n <[var 1]==value ->[%d]\n",*ptr_q,*ptr_w,*ptr_z);
    }
    
    else if (p1<p2&&p2<p3){
        ptr_q=&p1;
        ptr_w=&p2;
        ptr_z=&p3;
        
        printf("  [var 1]==value ->[%d]\n <[var 2]==value ->[%d]\n <[var 3]==value ->[%d]\n",*ptr_q,*ptr_w,*ptr_z);
        
    }
    
    
    else if(p2<p1&&p1<p3){
        ptr_q=&p2;
        ptr_w=&p1;
        ptr_z=&p3;
        
        printf("  [var 1]==value ->[%d]\n <[var 2]==value ->[%d]\n <[var 3]==value ->[%d]\n",*ptr_q,*ptr_w,*ptr_z);
        
        
    }
    
    else if (p1==p2==p3)
    
        return -1;
    
    
    return 0;    
}



int main()
{
    int n1,n2,n3;
    
    printf("digite o valor na [1] var\n");
    scanf("%d",&n1);
    printf("digite o valor na [2] var\n");
    scanf("%d",&n2);
    printf("digite o valor na [3] var\n");
    scanf("%d",&n3);
    
    printf("\n%d",ord(n1,n2,n3));

    return 0;
}
