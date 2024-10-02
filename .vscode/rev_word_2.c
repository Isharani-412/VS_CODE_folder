#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    int l=strlen(str);
    int i;
    
        if(str[i]==l-1)
        {
            for(i=l-1;i>=0;i--)
            {
            str[i]='\0';
            printf("%s",(str[i])+1);
            }
        }

    printf("%s",str);
    printf(" ");
}
int main()
{
    char str[30];
    
    int i;
    printf("enter a string:");
    fgets(str, 30, stdin);
    reverse(str);
    return 0;
}