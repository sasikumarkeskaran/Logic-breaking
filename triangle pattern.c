#include <stdio.h>

int main()
{
    int no,i,j,k,c=80;
    printf("Enter the no of rows you want:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        for(j=0;j<c/2-i;j++)
        {
            printf(" ");
        }
         for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
