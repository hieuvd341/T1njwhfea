#include <stdio.h>
#include <math.h>
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

    for (int i = 1; i < n + 1; i++)
    {
        sum += pow(x, i) * (i % 2 == 1 ? -1 : 1);
    }
    printf("%lf", sum);
    return 0;
}
