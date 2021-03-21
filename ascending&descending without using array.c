#include <stdio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter the three nos:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c)
    {
       temp=a;
       a=c;
       c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("The ascending order is:\n");
    printf("%d %d %d\n",a,b,c);
    printf("The descending order is:\n");
    printf("%d %d %d",c,b,a);
    return 0;
}
