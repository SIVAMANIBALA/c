#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j==0)||(i==n-1)||(i==j))
            printf("1");
            else if(i<j)
            printf("");
            else
            printf("0");
        }
        printf("\n");

    }
    return 0;
}