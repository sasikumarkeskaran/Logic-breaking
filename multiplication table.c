#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d=%d\n",i,n,i*n);
    }
    return 0;
}
