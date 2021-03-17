#include <stdio.h>

int main()
{
       int a[8],i,n,small,j,temp,sum;
    printf("enter the no element in the array:");
    scanf("%d",&n);
    printf("enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("The pair of the sum 6 is= (%d,%d)\n",a[i],a[j]);  
            }
        }
    }

    return 0;
}
