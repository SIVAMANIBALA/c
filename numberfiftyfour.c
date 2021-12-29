#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d%n",&a,&n);
    int b[n],i=0;
    while(a>0)
    {
        b[i]=a%10;
        a=a/10;
        i++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            printf("%d",b[n-j-1]);
        }
        printf("\n");
    }
    return 0;
}