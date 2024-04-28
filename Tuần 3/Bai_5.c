#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,f;
    scanf("%lf %lf %lf",&a,&b,&c);
    f = (a+b+c)/(a*a+b*b+1) - fabs(a-(c*cos(b)));
    printf("%.6lf",f);
    return 0;
}