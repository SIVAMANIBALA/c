#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            printf("%3d",n-j);
            
        }
        for(int k=0;k<n;k++)
        {
            if(i<=k)
            printf("%3d",n-i);    
        }
        for(int l=0;l<n;l++)
        {
            if((i+l)<n-1)
            printf("%3d",n-i);
        }
        for(int m=0;m<n;m++)
        {
            if((i+m)>n-1)
            printf("%3d",m+1);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)<n-1)
            printf("%3d",n-j);
            
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)>=n-1)
            printf("%3d",i+1);    
        }
        for(int l=0;l<n;l++)
        {
            if(i>l)
            printf("%3d",i+1);
        }
        for(int m=0;m<n;m++)
        {
            if(i<m)
            printf("%3d",m+1);
        }
        printf("\n");
    }
}