#include <stdio.h>
#define MAX 101

int main() {
  char s[MAX];
  int hash_map[26] = {0};
  scanf("%s", s);
  int distinct = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    int index = s[i] - 'a';
    if (hash_map[index] == 0) {
      hash_map[index] = 1;
      distinct++;
    }
  }

  if (distinct % 2 == 0) {
    printf("CHAT WITH HER!");
  } else {
    printf("IGNORE HIM!");
  }
  return 0;
}
