#include <stdio.h>

int main()
{
   char a[50],count=0,sum=0,i;
   printf("Enter the string:");
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       if((a[i]>='0') && (a[i]<='9'))
       {
        count++;
        sum=sum+a[i]-'0';
       }
   }
   printf("The no of numbers in the string is:%d\n",count);
   printf("The sum of no in the string is:%d",sum);

    return 0;
}
