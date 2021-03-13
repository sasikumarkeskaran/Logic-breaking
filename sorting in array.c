#include <stdio.h>

int main()
{
    int a[8],i,n,small,j,temp;
    printf("enter the no element in the array:");
    scanf("%d",&n);
    printf("enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("The second largest element is: %d",a[n-2]);
    return 0;
}
