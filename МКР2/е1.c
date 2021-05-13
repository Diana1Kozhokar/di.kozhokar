#include <stdio.h>
#include <math.h>
// введіть n
int vvedit_n(){
  int n;
  printf("Введіть довжину масиву n: ");
  scanf("%d", &n);
  return n;
}
// ініціалізація масиву
void init(int n, float *arr){
    for(int i = 0; i < n; i++){
        printf("Введіть %d елемент: ", i+1);
        scanf("%f", &arr[i]);
    }
}
// сума всіх ел. по модулю
float sum(int n, float arr[n]){
    float d = 0;
    for(int i = 0; i < n; i++){
        d+=fabs(arr[i]);
    }
    printf("Результат виконання ф-ії d: %.2f", d);
    return d;
}
// вивід масиву
void print_arr(int n, float arr[n]){
    printf("|");
    for(int i = 0; i < n; i++){
        if(i != 0)
            printf(", ");
        printf("%.2f", arr[i]);
    }
    printf("|\n");
}
int main() {
  int n = vvedit_n();
  float arr[n];
  init(n, arr);
  print_arr(n, arr);
  sum(n, arr);
  return 0;
}
  