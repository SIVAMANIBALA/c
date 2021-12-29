#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n*n;j++)
        {
            
            if((pow(2,i)-1)>=j)
            {
            printf("%d",a);
            a++;
            }
            
            if(a==10)
        a=1;
        }
        
        printf("\n");
        
    }
    return 0;
}