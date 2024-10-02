#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    
    int i;
    printf("enter a string:");
    fgets(str, 30, stdin);
    int l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}