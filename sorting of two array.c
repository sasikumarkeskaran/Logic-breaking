#include <stdio.h>

int main()
{
    int a[50],b[50],c[50],m,n,t,i,j,large,temp;
    printf("Enter the no of element of array a:");
    scanf("%d",&n);
    printf("Enter the element of the array a:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no of element of array b:");
    scanf("%d",&m);
    printf("Enter the element of the array b:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    t=m+n;
    for(i=0;i<t;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=n;i<m && j<t;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<t;i++)
    {
        printf("%d\t",c[i]);
    }
    printf("After sorting\n");
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
