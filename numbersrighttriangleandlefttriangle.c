#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)>n+1)
            printf("%d",n-j+2);
            
        }
        for(int k=1;k<=n;k++)
        {
            if((i+k)<=n+1)
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}