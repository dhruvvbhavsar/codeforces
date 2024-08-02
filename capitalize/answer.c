#include <stdio.h>
#define MAX_LENGTH 1000

int main() {
  char s[MAX_LENGTH];
  scanf("%s", s);

  char first = s[0];
  int a = (int)first;
  if(a > 96 && a < 123) {
      first -= 32;
      s[0] = first;
  }
  printf("%s", s);

  return 0;
}
