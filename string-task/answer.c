#include <stdio.h>
#include <string.h>
#define MAX 101
int main() {
  char s[MAX];
  scanf("%s", s);

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 65 && s[i] <= 90) {
      s[i] += 32;
    }

    switch (s[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
      memmove(&s[i], &s[i + 1], strlen(&s[i + 1]) + 1);
      i--;
    }
  }


  for (int i = 0; s[i] != '\0'; i++) {
    printf(".%c", s[i]);
  }
  return 0;
}
