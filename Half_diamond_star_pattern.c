#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<3)
    printf("The pattern is not possible");
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(int i=n-1;i>=1;i--)
        {
          for(int j=1;j<=i;j++)
          {
              printf("*");
          }
          printf("
");
        }
    }
}