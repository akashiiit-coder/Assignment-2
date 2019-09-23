//Writeprogram,which reads  a,b,and c. Let𝑥2+𝑦2+ax+by+c=0 be equationo fa circle.
// Print its center and radius. 
//Input: 10, −6, and −2; then output is center (−5,3) and radius 6. 
//Here circle is 𝑥2 + 𝑦2 + 10x − 6y − 2 = 0.
#include <stdio.h>
#include <math.h>
int main()
{


double a,b,c;
printf("Enter values of a,b,c");
scanf("%lf%lf%lf",&a,&b,&c);
printf("Center is (%lf,%lf)\n",-a/2,-b/2);
printf("Radius is %lf\n",sqrt(((a*a)/4)+(b*b/4)-(c*c)));

return 0;}

