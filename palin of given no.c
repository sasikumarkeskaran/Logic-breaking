#include <stdio.h>
#include <stdlib.h>
int reverse(int);
int palin(int);
int main()
{
   int no;
   printf("Enter the no: ");
   scanf("%d",&no);
   reverse(no);

    return 0;
}
int reverse(int n)
{
    int temp,r,no=0,sum;
    temp=n;
    while(n>0)
    {
        r=n%10;
        no=no*10+r;
        n=n/10;
    }
    sum=temp+no;
    palin(sum);
}
int palin(int pal)
{
    int temp1,r1,no1=0;
    temp1=pal;
    while(pal>0)
    {
        r1=pal%10;
        no1=no1*10+r1;
        pal=pal/10;
    }
    if(no1==temp1)
    {
        printf("The palindrome is %d",temp1);
        exit;
    }
    else
    {
        reverse(temp1);
    }
}