#include <stdio.h>
#include<math.h>
double foo(double a, int b)
{
    double res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a--;
    }
    return res;
}

int isInt(double a)
{
    if(a == (int) a) {
        return 1;
    }
    return 0;
}

int main()
{
    long double n, x, sum = 1;
    int a = scanf("%Lf", &n);
    int b = scanf("%Lf", &x);

    if (n <= 0 || isInt(n) == 0 || a <= 0 || b <= 0)
    {
        printf("Error");
        return 0;
    }

    for (int i = 1; i < n + 1; i++)
    {
        sum += pow(x, i) / foo(i, i);
    }
    printf("%Lf", sum);
    return 0;
}
