#include <stdio.h>

int main()
{
   int no,i,j,k,c=80;
   printf("Enter the  no of rows you want:");
   scanf("%d",&no);
   for(i=1;i<=no;i++)
   {
       for(j=1;j<=c/2-i;j++)
       {
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++)
       {
            if(k==1 || k==2*i-1 || i==no)  
                printf("*");  
            else  
                printf(" ");  
       }
       printf("\n");
   }

    return 0;
}
