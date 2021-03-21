#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,j;
    printf("Enter the string1: ");
    scanf("%s",a);
    printf("Enter the string2:");
    scanf("%s",b);
    printf("The string is:");
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++,i++)
    {
        a[i]=b[j];
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
