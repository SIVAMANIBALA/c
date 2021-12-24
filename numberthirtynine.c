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
            printf("%d",j+1);
        }
        for(int k=0;k<n;k++)
        {
            if(i>=k)
            printf("%d",k+i+1);
        }
        printf("\n");
    }
    return 0;
}