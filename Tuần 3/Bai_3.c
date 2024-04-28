#include<stdio.h>
int main(){
    double X, Y;
    double A;
    scanf("%lf", &X);
    scanf("%lf", &Y);
    printf("%lf\n", X*X + Y*Y);
    printf("%lf\n", (X+Y)*(X+Y));
    printf("%lf\n", (X-Y)*(X-Y));
    return 0;
}