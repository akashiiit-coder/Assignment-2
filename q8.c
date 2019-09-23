//Write program, which reads a, b and c as sides of a triangle and prints the angle A in degree and radian. 
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double cos_a= (b*b+c*c-a*a)/(2*b*c);
    printf(" a in radian %lf\n",acos(cos_a));
    printf("a in degrees is %lf\n", 180*acos(cos_a)/3.14);
}