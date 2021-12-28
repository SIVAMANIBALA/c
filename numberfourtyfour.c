#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j+1)
            printf("%d",i+j+2);
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)>=n-1)
            printf("%d",n-k+i);
        }
        printf("\n");
    }
    return 0;
}