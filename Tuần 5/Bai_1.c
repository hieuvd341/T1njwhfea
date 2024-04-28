#include <stdio.h>

int main()
{
    int arr[100];
    int n, sum = 0;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Error");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[n - i - 1]);
        sum += arr[i];
    }

    printf("\n%d", sum);
    return 0;
}
