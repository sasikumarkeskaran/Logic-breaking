#include <stdio.h>
#include <string.h>
int main()
{
    int n,r,result,result1;
    int fact(int);
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
    result=fact(n)/fact(n-r);
    result1=fact(n)/(fact(r)*fact(n-r));
    printf("The npr is :%d",result);
    printf("\nThe ncr is :%d",result1);
    return 0;
}
int fact(int no)
    {
        int i,res=1;
        for(i=1;i<=no;i++)
        {
            res=res*i;
        }
        return res;
        
    }
