#include<stdio.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
            printf("%d",a);
            a++;
            }
        }
        for(int k=0;k<n;k++)
        {
            if(i>k)
            {
            printf("%d",a);
            a++;
            }
        }
        a=1;
        printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)<=n-2)
            {
            printf("%d",a);
            a++;
            }
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)<=n-3)
            {
                printf("%d",a);
                a++;
            }
        }
        a=1;
        printf("\n");
    }
    return 0;
}