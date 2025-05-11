#include <stdio.h>

int main() {
  int n = 5;
  int factorial = 1;

  if (n < 1) {
    printf("0\n");
  }
  else {
    for (int m = 0; m < n; ++m) {
      int current = factorial;
      for(int i = 0; i < m; ++i) {
        factorial += current;
      }
    }
    printf("%d\n", factorial);
  }

  return 0;
}