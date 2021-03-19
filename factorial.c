#include <stdio.h>

int main()
{
    int a,n,prod=1,i;
    printf("Enter the no to find factorial:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        prod=prod*i;
    }
    printf("The factorial of the no is:%d",prod);
    return 0;
}
