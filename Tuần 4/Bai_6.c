#include <stdio.h>
#include<math.h>

int isInt(double a)
{
    if(a == (int) a) {
        return 1;
    }
    return 0;
}
int main()
{
    double n, x, sum = 1;
    scanf("%lf %lf", &n, &x);

    if (n <= 0 || isInt(n) == 0)
    {
        printf("Error");
        return 0;
    }

    sum = pow(x, n+1)-1;
    sum = sum/(x-1);
    printf("%lf", sum);
    return 0;
}
