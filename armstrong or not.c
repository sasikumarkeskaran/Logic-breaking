#include <stdio.h>

int main()
{
    int a,n,sum=0,temp;
    printf("Enter the no see armstrong or not:");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=n*n*n+sum;
        a=a/10;
        
    }
    if(temp==sum)
    {
        printf("The given no is armstrong");
    }
    else
    {
        printf("The given no is not armstrong");
    }
}
