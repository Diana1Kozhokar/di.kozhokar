#include <stdio.h>
#include <math.h>
int n;
float x;
int main() {
   do{
       printf ("--------------------------\n");
       printf ("Введіть натуральне число n: ");
       scanf ("%d",&n);
       printf ("Введіть дійсне число x: ");
       scanf ("%f",&x);
     int p=0;
     for (int i = 1;i <= n;i++){
   int s=1;
      for (int j=1;j<= i;j++)
    s*= i + x;
       p+=s;
      } 
     printf("Результат: %d\n", p);
     }while(1);
    return 0;
}
