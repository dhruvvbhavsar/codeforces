#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    char line[200];
    int scores[200];
    getchar();
    fgets(line, 200, stdin);

    int count = 0;

    char *token = strtok(line, " ");

    int i = 0;
    while (token != NULL && i < n)
    {
        scores[i] = atoi(token);
        i++;
        token = strtok(NULL, " ");
    }
    int target = scores[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > 0 && scores[i] >= target)
            count++;
    }
    printf("%d\n", count);
    return 0;
}