#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c,s,ar;
printf("Enter the sides of a triangle");
scanf("%lf%lf%lf",&a,&b,&c);
s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b));
printf("The area of the given triangle is %lf\n",ar);
}


