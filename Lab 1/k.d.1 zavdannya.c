#include <stdio.h>

int main() {
 int d, a, b, c, x;
  printf ("Введіть трьохзначне число: ");
  scanf ("%d", &d);
  a = d%10;
  b = d%10%10;
  c = d/100;
  printf ("Результат:%d%d%d", a, b, c)
    return 0;
}