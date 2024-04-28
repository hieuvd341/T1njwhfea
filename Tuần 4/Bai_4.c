#include <stdio.h>
int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a; // or return b; a = b
}
int BCNN(int a, int b)
{
    int result = UCLN(a, b);
    return a * b / result;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("ERROR");
        return 0;
    }
    
    printf("%d\n", UCLN(a,b));
    printf("%d", BCNN(a,b));
    return 0;
}
