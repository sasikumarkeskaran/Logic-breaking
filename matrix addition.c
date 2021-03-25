#include <stdio.h>

int main()
{
    int a[50][50],b[50][50],sum[50][50],i,j,r1,c1,r2,c2;
    printf("Enter the no of rows and column for matrix a:");
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix a is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no of rows and column for matrix b:");
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("The matrix b is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("The sum of matrix is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
