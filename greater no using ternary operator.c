#include <stdio.h>

int main()
{
   int a,b,c,result;
   printf("Enter the three nos:");
   scanf("%d %d %d",&a,&b,&c);
   result=a>b && a>c?printf("The no a is greater"):b>a && b>c?printf("The no b is greater"):printf("The no c is greater");
    return 0;
}
