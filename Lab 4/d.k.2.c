#include <stdio.h>

int main() {
  int a = 0;
    const int MIN = 10, MAX = 100;
  for (int i = MIN;i < MAX;i++){
    if (i%3==0)
      a+=i;
  }
  printf ("-------------------------------------------\n");  
  printf ("Результат обчислення циклом for: %d",a);
  //---Кінець циклу for---//
  a = 0;
  int i = MIN;
  while (i<MAX){
   if (i%3==0)
      a+=i;
    i++;
  }
  printf ("\nРезультат обчислення циклом while: %d",a);
  //---Кінець циклу while---//
   a = 0;
  i = MIN;
  do {
   if (i%3==0)
   a+=i;
   i++;
   } while (i<MAX);
  printf ("\nРезультат обчислення циклом do while: %d\n",a);
  printf ("-------------------------------------------");  
  //---Кінець циклу do while---// 
    return 0;
}