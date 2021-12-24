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
                if(a==1)
                {
                printf("%d",a);
                a=0;
                }
                else
                {
                printf("%d",a);
                a=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}