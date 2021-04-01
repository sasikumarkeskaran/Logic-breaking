#include <stdio.h>

int main()
{
    int a[50][50],i,j,r,c,sum=0;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the element of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<c-1;j++)
    {
        i=0;
        sum+=a[i][j];
    }
    for(j=1;j<c;j++)
    {
        i=r-1;
        sum+=a[i][j];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==c-1)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The matrix zigzag addition is:%d",sum);

    return 0;
}
