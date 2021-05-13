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

  printf("*******************************************\n");
  printf("Запустити програму - 1\n");
  printf("Вийти з програми - 2\n");
  printf("*******************************************\n");

  while(1) {
    if (c == 0) {
      printf("\nВвести: ");
      scanf("%d", &m);
      c += 1;
    }
    else {
      printf("\n\nВи можете спробувати ще раз - 1 або вийти з програми - 2\n");
      printf("Ввести: ");
      scanf("%d", &m);
    }

    if (m== 1) {
      // Введення даних
      printf("\n****************************\n");
      printf("Задайте два дійсних числа:\n");
      printf("****************************\n");
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
        printf("\n***Результати***\n");
        printf("z = %.2f", z);
      }

    }
    else {
      break;
    }
  }

  return 0;
}
