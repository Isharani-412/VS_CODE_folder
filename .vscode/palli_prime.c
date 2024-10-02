#include<stdio.h>
int primecheck(int n)
{ 
    int r,sum;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int pallicheck(int n)
{
    int copy=n,r,sum=0;
    while (n>0)
    {
        r=n%10;
        sum*=10+r;
        n/=10;
    }
    if(sum==copy)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int sum=0,r,n;
    printf("enter num:");
    scanf("%d",&n);
    if(primecheck(n)==1&&pallicheck(n)==1)
    {
        printf(" not palliprime");
    }
    else
    {
        printf(" palliprime");

    }

}
