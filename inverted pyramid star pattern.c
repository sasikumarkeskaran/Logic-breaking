#include <stdio.h>

int main()
{
   int no,i,j,k,c=80;
   printf("Enter the  no of rows you want:");
   scanf("%d",&no);
   for(i=no;i>=1;i--)
   {
       for(j=1;j<=c/2-i;j++)
       {
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++)
       {
           printf("*");
       }
       printf("\n");
   }

    return 0;
}
