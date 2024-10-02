#include<stdio.h>
#include<string.h>
void replace_repeated_char(char * str)
{
    int l=strlen(str);
    for(int i=0;i<l-1;i++)
    {
        if(str[i]==str[i+1])
        {
            str[i+1]='$';
        }
        if(str[i]==' '&&str[i]==str[i+1])
        {
            str[i+1]='$';
        }
    }
    
}
int main()
{
    char input[100]="this is an apple";
    printf("enter string:");
    fgets(input,100,stdin);
    replace_repeated_char(input);
    printf("modified string:%s\n",input);
    return 0;

}   
   