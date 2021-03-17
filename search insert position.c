#include <stdio.h>

int main()
{
    int a[50],i,n,tar,count=0;
    printf("Enter the no of element of the array\t");
    scanf("%d",&n);
    printf("Enter the array element\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the targeted element\t");
    scanf("%d",&tar);
    for(i=0;i<n;i++)
    {
        if(tar==a[i])
        {
            printf("%d",i);
            count++;
        }
    }
    if(count==0)
    {
         if(tar==0)
        {
            printf("%d",0);
        }
        else if(tar>a[n-1])
        {
            printf("%d",n);
        }
        else if(tar!=0 && tar<a[n-1])
        {
            for(i=0;i<n;i++)
            {
                if(tar>a[i] && tar<a[i+1])
                {
                    printf("%d",i+1);
                }
            }
        }
    }
    return 0;
}
