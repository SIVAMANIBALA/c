#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=1,b=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
            printf("%4d",a);
            a=a+b;
            b++;
            }
        }    
        printf("\n");
        
    }
    return 0;
}