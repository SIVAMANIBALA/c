#include<stdio.h>
int main()
{
    int n;
    int l,m;
    scanf("%d",&n);
    l=m=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i>=j)
            {
                printf("%d",n-j);
            }
        }
        for(int k=0;k<n-1;k++)
        {
            if(i<=k)
            printf("%d",n-i);
        
        }    

       printf("\n");
    }
}