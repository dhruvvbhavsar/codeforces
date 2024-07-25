#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 101  

void abbreviate_word(char* word) {
    int length = strlen(word);
    if (length > 10) {
        printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
    } else {
        printf("%s\n", word);
    }
}

int main() {
    int n;
    char word[MAX_WORD_LENGTH];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        abbreviate_word(word);
    }

    return 0;
}