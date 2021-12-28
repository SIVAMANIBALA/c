#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a=i;
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {    
                printf("%3d",a+1);
                a=a+n-j-1;    
            }
        }
        printf("\n");
    }
    return 0;
}