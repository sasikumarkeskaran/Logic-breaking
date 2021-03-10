/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int a=0,b=1,i,c,n,j;    
    printf("Enter the limit:");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {    
        a=0;    
        b=1;    
        printf("%d\t",b);    
        for(j=1;j<i;j++)    
        {    
            c=a+b;    
            printf("%d\t",c);    
            a=b;    
            b=c;    
    
        }    
        printf("\n");    
    }
    return 0;
}
