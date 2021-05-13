#include <stdio.h>
#include <math.h>


float f(float x, float y) {
  float result;
  result = ((x + y) / (pow(x,2) + x*y + pow(y,2))) + ( x / (1+pow(y,2))) + ( y / (1+pow(x,2)));
  return result;
}


int main() {
  int m, c = 0;
  float u, v, z;
  while(1) {
   
      // Введення даних
      printf("\n------------------------------\n");
      printf("Задайте два дійсних числа:\n");
      printf("------------------------------\n");
      printf("\nЗадайте число u: ");
      scanf("%f", &u);
      printf("Задайте число v: ");
      scanf("%f", &v);

      // Обчислення
      if (pow(u,2) + u*v + pow(v,2) == 0) {
        printf("\nВи ввели некоректне значення виконуєть ділення на 0");
      }
      else {
        z = f(u,v) + f(u+v,u*v)+ f(u*2,v*2) + f(0.1,0.1);
        printf("\nРезультати\n");
        printf("z = %.2f", z);
      }
  }

  return 0;
}