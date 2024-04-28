#include <stdio.h>

int main()
{
    int arr[100];
    int n, pos_sum = 0, neg_sum = 0, count = 0;
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
        if (arr[i] < 0)
        {
            neg_sum += arr[i];
            count += 1;
        }
        else
        {
            pos_sum += arr[i];
        }
    }
    if (neg_sum == 0)
    {
        printf("Mang khong co so am");
    }
    else
    {
        printf("%f", neg_sum * 1.0 / count);
    }
    if (pos_sum == 0)
    {
        printf(" Mang khong co so duong");
    }
    else
    {
        printf(" %f", pos_sum * 1.0);
    }
    return 0;
}
