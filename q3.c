//program to find the area of triangle
#include <stdio.h>
#include <math.h>
int main()
{
   double a,b,c,d,e,f;
   scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
   double A = sqrt(pow(a-c,2)+pow(b-d,2));
   double B = sqrt(pow(a-e,2)+pow(b-f,2));
   double C = sqrt(pow(d-f,2)+pow(c-e,2));
   double s= (A+B+C)/2;
   double area = sqrt(s*(s-A)*(s-B)*(s-C));
   printf("the area of triangle is %lf\n",area);
   return 0;
   
}

   


