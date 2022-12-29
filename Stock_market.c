#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("LOSS
");
        }
        else if(a<b)
        {
            printf("PROFIT
");
        }
        else
        {
        printf("NEUTRAL
");
        }
        t--;
    }

}