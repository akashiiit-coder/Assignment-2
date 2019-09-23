//Write program, which reads h, k, r, and s. 
//Let a circle has center (h, k) and radius r. Let
//line x = s intersects the circle.
// The program should calculate the chord length.
#include <stdio.h>
#include <math.h>
int main()
{
double h,k,r,s;
scanf("%lf%lf%lf%lf",&h,&k,&r,&s);
double cl=2*sqrt(r*r-(h-s)*(h-s));
printf("%lf",cl);
return 0;
}
