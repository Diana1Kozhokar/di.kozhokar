#include <stdio.h>
#include <math.h>
int a, b;
float x;
int main() {
   do{
    printf ("--------------------------\n");
     printf ("Введіть ціле число а: ");
     scanf ("%d",&a);
      printf ("Введіть ціле число b: ");
     scanf ("%d",&b);
     if (a*b < 0 || a-b*b < 0)
       printf ("Для заданих значень а та b береться корінь з від'ємного числа. Введіть інші значення\n");
   else {
     x = sqrt(a* b*b) + sqrt(a*b);
     printf ("Результат: %.2f \n", x);
   }
     }while(1);
    return 0;
}
   