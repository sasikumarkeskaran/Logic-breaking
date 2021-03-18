#include <stdio.h>

int main()
{
   int a[50],i,n,rot,temp,j=1;
   printf("Enter the no of elements in array:");
   scanf("%d",&n);
   printf("Enter the elements of the array:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter the no of rotation:");
   scanf("%d",&rot);
   while(rot>0)
   {
       temp=a[n-1];
        for(i=n-1;i>=0;i--)
        {
            a[i]=a[i-1];
       
        }
        a[0]=temp;
        printf("After %d rotation:",j);
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
        rot--;
        j++;
   }
   
    return 0;
}
