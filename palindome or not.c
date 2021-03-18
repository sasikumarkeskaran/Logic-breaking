#include <stdio.h>

int main()
{
   int no,n,temp,t;
   printf("Enter the no to find it is palindrome or not:");
   scanf("%d",&no);
   temp=no;
   while(no>0)
   {
       n=no%10;
       t=t*10+n;
       n=n/10;
   }if(temp==t)
    {
        printf("The no is palindrome");
    }
    else
    {
        printf("The no is not palindrome");
    }
    return 0;
}
