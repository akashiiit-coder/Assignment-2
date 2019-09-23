#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
    double r2=(pow(e/2,2)+pow(f/2,2)+pow(g/2,2)-h);
    double c1=-e/2;
    double c2=-f/2;
    double c3=-g/2;
    double dis2=pow((fabs(a*c1+b*c2+c*c3+d)/sqrt(a*a+b*b+c*c)),2);
    double cr=sqrt(r2-dis2);
    printf("%lf\n",3.14*cr*cr);
    return 0;
}
