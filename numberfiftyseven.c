#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            printf("%d",j+1);
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)>n-1)
            printf("%d",n-k);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)<=n-2)
            printf("%d",j+1);
        }
        for(int k=0;k<n;k++)
        {
            if(i<k-1)
            printf("%d",n-k);
        }
        printf("\n");
    }   
}