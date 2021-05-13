#include <stdio.h>
#include <math.h>
int A1x, A1y, B1x, B1y, C1x, C1y;
int A2x, A2y, B2x, B2y, C2x, C2y;
// задати точки
void triangles(){
  printf("Трикутник 1, точка А, координата х: ");
  scanf("%d", &A1x);
  printf("Трикутник 1, точка А, координата y: ");
  scanf("%d", &A1y);
  printf("Трикутник 1, точка B, координата x: ");
  scanf("%d", &B1x);
  printf("Трикутник 1, точка B, координата y: ");
  scanf("%d", &B1y);
  printf("Трикутник 1, точка C, координата x: ");
  scanf("%d", &C1x);
  printf("Трикутник 1, точка C, координата y: ");
  scanf("%d", &C1y);
  // трикутник 2
  printf("Трикутник 2, точка А, координата х: ");
  scanf("%d", &A2x);
  printf("Трикутник 2, точка А, координата y: ");
  scanf("%d", &A2y);
  printf("Трикутник 2, точка B, координата x: ");
  scanf("%d", &B2x);
  printf("Трикутник 2, точка B, координата y: ");
  scanf("%d", &B2y);
  printf("Трикутник 2, точка C, координата x: ");
  scanf("%d", &C2x);
  printf("Трикутник 2, точка C, координата y: ");
  scanf("%d", &C2y);
  //вивід трикутників
  printf("Трикутник 1, A(%d;%d), B(%d;%d), C(%d;%d)\n"
    , A1x, A1y, B1x, B1y, C1x, C1y);
  printf("Трикутник 2, A(%d;%d), B(%d;%d), C(%d;%d)\n"
    , A2x, A2y, B2x, B2y, C2x, C2y);
}
// довжини сторін
float length(int x1, int y1, int x2, int y2){
  return fabs(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
// знайти площу
float find_square(int x1, int y1, int x2, int y2, int x3, int y3){
  float AB = length(x1, y1, x2, y2);
  float BC = length(x2, y2, x3, y3);
  float AC = length(x1, y1, x3, y3);
  float p = (AB + BC + AC)/2; 
  float S = sqrt(p*(p-AB)*(p-BC)*(p-AC));
  return S;
}
// яка площа більша
void check(float tr1, float tr2){
  if(tr1 > tr2)
    printf("Площа першого трикутника більша за площу другого\n");
  else if(tr2 > tr1)
    printf("Площа другого трикутника більша за площу першого\n");
  else 
    printf("Площі обох трикутників рівні\n");
}
// головна програма
int main() {
  triangles();
  float ABC_1 = find_square(A1x, A1y, B1x, B1y, C1x, C1y);
  float ABC_2 = find_square(A2x, A2y, B2x, B2y, C2x, C2y);
  check(ABC_1, ABC_2);
  return 0;
}
  