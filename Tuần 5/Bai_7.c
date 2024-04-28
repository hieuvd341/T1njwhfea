#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    fgets(str, 1000, stdin);
    int len = strlen(str);
    char res[1000];
    int i = 0, j = 0;

    while (i < len && str[i] == ' ')
    {
        i++;
    }

    while (i < len)
    {
        if (str[i] != ' ')
        {
            res[j++] = str[i];
        }
        else if (i + 1 < len && str[i + 1] != ' ')
        {
            res[j++] = str[i];
        }
        i++;
    }

    if (j > 0 && res[j - 1] == ' ')
    {
        j--;
    }

    res[j] = '\0';

    printf("%s\n", res);

    return 0;
}
