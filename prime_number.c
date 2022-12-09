#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    if(n==0)
    {
        a=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }
    if(a==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}