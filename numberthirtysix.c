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
            (i%2==0)?printf("1"):printf("0");
        }
        printf("\n");
    }
    return 0;
}