#include <stdio.h>

int main()
{
    int arr[100];
    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (max < arr[i] * arr[i + 1])
        {
            max = arr[i] * arr[i + 1];
        }
    }
    printf("%d", max);
    return 0;
}
