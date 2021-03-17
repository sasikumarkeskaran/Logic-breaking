#include <stdio.h>

int main()
{
    int a[59],n,i,no,temp[50][50],temp1[50][50],j,k=0;
    printf("Enter the no element of the array:");
    scanf("%d",&n);
    printf("Enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of no: ");
    scanf("%d",&no);
   for(i=0;i<2;i++)
   {
       for(j=0;j<=no-1;j++)
       {
           temp[i][j]=a[k];
           k++;
       }
   }
   for(i=0;i<2;i++)
   {
       for(j=0;j<=no-1;j++)
       {
           temp1[j][i]=temp[i][j];
       }
   }
   for(i=0;i<=no-1;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("%d\t",temp1[i][j]);
       }
   }
    return 0;
}
