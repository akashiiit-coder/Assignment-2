#include <stdio.h>
#include <math.h>
double distance (double x,double y,double z, double w)
{
return(sqrt(pow(x-z,2)+pow(w-y,2)));
}

int main()
{
double a,b,c,d;
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
printf("Distance between ab and cd is%lf/n",distance(a,b,c,d));
		return 0;
}

