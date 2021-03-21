#include <stdio.h>

int main()
{
    char a[100];
    int i=0,count=0,j;
    printf("Enter the string:");
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] =='o' || a[i]=='O' || a[i] == 'u' || a[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("The no of vowel in the string is %d",count);
    return 0;
}
