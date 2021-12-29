#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            printf("%d",j+1);
            else
            printf(" ");
        }
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-2))
            printf("%d",n-j-1);
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-2))
            printf("%d",j+1);
            else
            printf(" ");
        }
        for(int j=0;j<n-1;j++)
        {
            if(i==j)
            printf("%d",n-j-1);
            else
            printf(" ");
        }
        printf("\n");
    }
}