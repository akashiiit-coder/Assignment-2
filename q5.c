#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,d,e;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
double p=(double)a*c+b*d+e;
double q=(double)sqrt(c*c+d*d);
printf("%lf\n",p/q);
return 0;
}

