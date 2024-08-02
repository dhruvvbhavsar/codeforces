#include <stdio.h>
#define MAX 100

void sortArray(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  char s[MAX];
  scanf("%s", s);
  int arr[MAX];
  int count = 0;
  for (int i = 0; s[i] != 0; i++) {
    if (s[i] > '0' && s[i] < '9') {
      arr[count] = (int)s[i] - '0';
      count++;
    }
  }

  sortArray(arr, count);

  for (int j = 0; j < count; j++) {
    if (j == count - 1) {
      printf("%d", arr[j]);
      break;
    }
    printf("%d+", arr[j]);
  }

  return 0;
}
