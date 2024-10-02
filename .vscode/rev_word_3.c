#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],w[50];
    
    int i,j=0,l=strlen(s);
    printf("enter a string:");
    fgets(s, 30, stdin);

    for(i=0;i<l;i++)
    {
        if(s[i]!=' '&&s[i]!='\0')
        {
            w[j++]=s[i];
        }
        else 
        {
            w[j]='\0';
            reverse(w);
            j=0;
            
        }
        
    }
return 0;
}
void reverse(char w[])
{
    int l=strlen(w);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",w[i]);
    }
printf(" ");
}