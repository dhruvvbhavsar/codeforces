#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 101

int main()
{
    char str1[N], str2[N];

    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);
    int result = 0;

    for (int i = 0; i < len; i++)
    {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);

        if (c1 < c2)
        {
            result = -1;
            break;
        }
        else if (c1 > c2)
        {
            result = 1;
            break;
        }
    }

    printf("%d", result);
    return 0;
}