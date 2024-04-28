#include <stdio.h>

double product(double a, int b)
{
    double res = 1;
    while(b--){
        res = res*a;
    }
    return res;
}

int main()
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = product(b, 6) + a * product(b, 5) + product(a, 2) * product(b, 4) + product(a, 3) * product(b, 3) + product(a, 4) * product(b, 2) + product(a, 5) * product(b, 1) + product(a, 6);
    printf("%.6lf", c);
    return 0;
}
