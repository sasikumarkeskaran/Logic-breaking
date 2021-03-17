#include <stdio.h>

int main()
{
    int a[50][50],t[50][50],i,j,n,m;
    printf("Enter the no of rows and columns:\n");
    scanf("%d %d",&n,&m);
    printf("Enter the element of the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
