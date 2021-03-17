#include <stdio.h>

int main()
{
    int a,n,rev;
    scanf("%d",&a);
    printf("The reversed no is:");
    while(a>0)
    {
        n=a%10;
        printf("%d",n);
        a=a/10;
    }

    return 0;
}
