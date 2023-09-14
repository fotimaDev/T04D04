#include <math.h>
#include <stdio.h>

int f(int a) {
  int x = pow(a, 0.5) + 1;
  for (int i = 2; i < x; i++) {
    int b = a;
    while (b - i >= 0)
      b -= i;
    if (b == 0)
      return 0;
  }
  return 1;
}

int s(int i, int b) {
  while (b - i >= 0)
    b -= i;
  if (b == 1)
    return 0;
  if (b == 0)
    return 1;
  return 0;
}

int main() {
  int a;
  scanf("%d", &a);
  if (a < 0)
    a = -a;
  for (int i = a; i > 1; i--) {
    if (s(i, a)) {
      if (f(i)) {
        printf("%d", i);
        break;
      }
    }
  }

  return 0;
}
