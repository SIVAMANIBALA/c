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
            printf("%d",j*2+1);
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)>=n-1)
            printf("%d",(n-k)*2-1);
        }
        printf("\n");
    }
    return 0;
}
