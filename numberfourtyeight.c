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
            else
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)>=n-1)
            printf("%d",n-k);
            else
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}