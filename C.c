#include<stdio.h>
int main()
{
    double a[100],b;
    int i,j;
    scanf("%lf",&b);
    for(i=0;i<100;i++)
    {
       printf("N[%d] = %.4lf\n",i,b);
       b=b/2;
    }
    return 0;
}
