#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
            printf("%d",j);
        }
        for(int k=1;k<n;k++)
        {
            if((i+k)>n)
            printf("%d",n-k);
            
        }
        printf("\n");
    }
    return 0;
}