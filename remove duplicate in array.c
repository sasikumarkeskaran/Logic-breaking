#include <stdio.h>

int main()
{
    int a[50],n,i,no,j;
    printf("Enter the no of element of the array:");
    scanf("%d",&n);
    printf("Enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    no=a[n-1];
    int b[no];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=no;j++)
        {
            if(a[i]==j)
            {
                b[j]++;
            }
        }
    }
    for(i=0;i<=no;i++)
    {
        if(b[i]!=0)
        {
        printf("%d",i);
        }
        b[i]==0;
    }
    return 0;
}
