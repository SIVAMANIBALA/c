#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i<=j)
            printf("%d",j);
        }
        for(int k=1;k<=n;k++)
        {
            if(i>=k)
            printf("%d",n);
        }
        printf("\n");
    }
}