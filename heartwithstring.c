/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char a[12]="sivamanibala";
    scanf("%d",&n);
    int h=2*2*n-1;
    int b=h-strlen(a);
    for(i=2;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=n-1)
            printf("*");
            else
            printf(" ");
        }
        for(int k=1;k<n;k++)
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
        for(int m=1;m<n;m++)
        {
            if(i>=m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int o=-1;o<b;o++)
    {
    if(o==(b/2))
    printf("%s",a);
    else 
    printf("*");
    }
    printf("\n");
    n=n+n;
    
    for(i=1;i<n+1;i++)
    {
        
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
