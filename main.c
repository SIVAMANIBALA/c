/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int t,d,m,y;
    printf("DD:MM;YYYY");
    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&y);
    int a[12]={0,3,3,6,1,4,6,2,5,0,3,5};
    int b[4]={6,4,2,0};
    char* c[7]={"sun","mon","tues","wed","thurs","fri","satur"};
    t=(((y%100)+((y%100)/4)+d+a[m-1]+a[(y/100)%4])%7);
    printf("%d odd days %s ",t,c[t]);
    return 0;
}
