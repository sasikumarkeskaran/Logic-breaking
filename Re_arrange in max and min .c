#include <stdio.h>

int main()
{
    int a[50],i,j,no;
    printf("Enter the no of element:");
    scanf("%d",&no);
    printf("Enter the element:");
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=no-1;i<j&&j>i;i++,j--)
    {
        printf("%d\t",a[j]);
        printf("%d\t",a[i]);
    }

    return 0;
}
