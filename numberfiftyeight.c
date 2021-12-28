#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            printf("*");
        }
        for(int k=0;k<n;k++)
        {
            if(i>=k)
            printf("%d",k+1);
        }
        for(int l=0;l<n;l++)
        {
            if((i+l)>n-1)
            printf("%d",n-l);
        }
        for(int j=0;j<n;j++)
        {
            if(i==j)
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            printf("*");
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)<n-1)
            printf("%d",k+1);
        }
        for(int l=0;l<n;l++)
        {
            if(i<l-1)
            printf("%d",n-l);
        }
        for(int j=0;j<n;j++)
        {
            if(j-1==i)
            printf("*");
        }

        printf("\n");
    }
}