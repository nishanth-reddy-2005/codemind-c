#include<stdio.h>
#include<math.h>
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m,n,c=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(prime(i)&&i!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}