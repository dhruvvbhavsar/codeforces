#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[4];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        
        if (str[1] == '+')
        {
            count++;
        }
        else if (str[1] == '-')
        {
            count--;
        }
    }

    printf("%d\n", count);
    return 0;
}