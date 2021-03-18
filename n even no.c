#include <stdio.h>

int main()
{
    int no,i,count=0;
    printf("Enter the no of even no you want:");
    scanf("%d",&no);
        for(i=1;i<100,count<no;i++)
        {
            if(i%2==0)
            {
                printf("%d\t",i);
                count++;
            }
        }
    return 0;
}
