#include <stdio.h>

int main()
{
     int a[50],i,j,no,count=0,even=0;
    printf("Enter the no of element:");
    scanf("%d",&no);
    printf("Enter the element:");
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<no;i++)
    {
        while(a[i]>0)
        {
            a[i]/10;
            count++;
        }
        if(count%2==0)
        {
            even++;
        }
        count=0;
    }
    printf("The no of even digit in the array is:%d ",even);
   
    return 0;
}
