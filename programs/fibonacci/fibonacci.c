#include <stdio.h>

int main () {
  int n = 14; // arbitrary
  int fn2 = 0; // base case f(n - 2) = 0
  int fn1 = 1; // base case f(n - 1) = 1
  int fn; // will store result
  
  if (n <= 0)
    fn = 0;
  if (n == 1)
    fn = 1;

  for (int i = 2; i <= n; i++) {
    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
  }

  printf("%d\n",fn);
  
  return 0;
}