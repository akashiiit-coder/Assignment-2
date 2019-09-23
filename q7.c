/*Write program,which reads a,b,c,p,q and r. 
Let ax+by+c=0 and
    px+qy+r=0 be the equations of lines.
Print their point of intersection. 
Input: 4 8 12 2 7 3; Output: (−5,1).*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,p,q,r;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
    double d=(double)p*b-a*q;
    double n1=(double)a*r-p*c;
    double n2=(double)q*c-r*b;
    printf("x= %lf, y= %lf \n",n2/d,n1/d);
}