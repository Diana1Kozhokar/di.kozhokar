#include <stdio.h>
#include <math.h>

int main() {
  const int a = 0, b = 6 ;
  const float dx = 0.5;
  float y;
  printf ("-------------------------------------------------\n");
for (float x = a; x < b; x+=dx ){
  if (0 == (1-sqrt(x)))
  {
   printf ("Для значення х:%.1f, виконується ділення на 0\n", x); 
  continue;
  }
   y = (1)/(1-sqrt(x));
  printf("%.1f\t%.2f\n", x, y); 
  }
   printf ("\n------------------------------------------------\n");
    return 0;
}
  