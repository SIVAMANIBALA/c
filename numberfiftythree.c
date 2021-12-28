#include<stdio.h>
int main()
{
    int n,i=0,f,j;
    scanf("%d",&n);
    int b[n];
    while(n>0)
    {
        b[i]=n%10;
        n=n/10;
        i++;
    }
    
    
    for( f=0;f<i;f++)
    {
        for( j=0;j<i;j++)
        {
            if((f+j)<=i-1)
            {
                printf("%d",b[i-j-1]);
            }
        }
        printf("\n");
    }
    return 0;
}