/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=n-1)
            printf("*");
            else
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            if(i>=k)
            printf("*");
            else
            printf(" ");
        }
        printf(" ");
        for(int l=0;l<n;l++)
        {
            if((i+l)>=n-1)
            printf("*");
            else
            printf(" ");
        }
        for(int m=0;m<n;m++)
        {
            if(i>=m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    n=n+n;
    for(i=0;i<n;i++)
    {
        printf(" ");
        for(j=0;j<n;j++)
        {
            if(i<=j)
            printf("*");
            else
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            if((i+k)<n-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}
