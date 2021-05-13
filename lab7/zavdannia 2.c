#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int more_than_five(int arr[10]) {
  int counter = 0;

  for (int i=0; i < 10; i++) {
    if (arr[i] > 5) counter++;
  }
  return counter;
}

int after_max_sum(int arr[10]) {
  int max = arr[0], max_index = 0;

  for (int i=0; i < 10; i++) {
    if (arr[i] >= max) {
      max = arr[i];
      max_index = i;
    }
  }
  printf("\nМаксимальний елемент : %d\n", max);
  int sum = 0;
  for (int i=max_index+1; i < 10; i++) {
    sum += arr[i];
  }
  return sum;
}

void print_arr(int arr[10]) {
  printf("{");
  for (int i=0; i<10; i++) {
    if (i == 9) {
      printf("%d", arr[i]);
    }
    else {
      printf("%d, ", arr[i]);
    }
  }
  printf("}");
}

void creat_arr(int* result) {
  int arr[10];
  const int Low = -100;
  const int High = 100;
  srand(time(0));

  for (int i = 0; i < 10; i++) {
    result[i] = Low/2 + rand()%High;
  }
}


int main() {
  int m, c = 0;
 
  while(1) {
      
   
      int arr[10];
      creat_arr(arr);
      printf("\nМасив створений з псевдовипадкових чисел з діапазону [-100; 100]\n");
      print_arr(arr);
      printf("\n\nРезультати\n");
      printf("Кількість елементів більших за число 5: %d", more_than_five(arr));
      printf("Сума елементів масиву, розташованих після максимального елемента: %d", after_max_sum(arr));
  printf("\nПродовжити - 1");
    scanf ("%d",&m);
  }
}