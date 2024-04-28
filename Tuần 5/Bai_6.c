#include <stdio.h>
#include <string.h>
int main()
{
    char s[99], t[99], str[26];
    int res[30];
    scanf("%s%s", s, t);
    int len = 0;
    for (char i = 'a'; i < 'z' + 1; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (i == s[j])
            {
                count += 1;
            }
        }
        for (int k = 0; k < strlen(t); k++)
        {
            if (i == t[k])
            {
                count += 1;
            }
        }
        if (count > 0)
        {
            str[len] = i;
            res[len] = count;
            len++;
        }
    }
    printf("%s", str);
    for (int i = 0; i < len; i++)
    {
        printf("\n%d", res[i]);
    }
    return 0;
}
