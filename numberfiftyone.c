#include<stdio.h>
int main()
{
    int n,a=1,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i%2==0)
           {
               if(i>=j)
               {
               printf("%4d",a);
               a++;
               b=a;
               }
           }
           else
           {
               if((i+j)>=n-1)
               {
                   printf("%4d",n-j+b-1);
                   a++;
               }
           }
        }
        printf("\n");
    }
return 0;

}