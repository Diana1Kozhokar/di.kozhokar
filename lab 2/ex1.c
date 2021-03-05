#include <stdio.h>

int main() {
    int a,b;
    float x,y,z;
    printf("Перше число: ");
    scanf("%d",&a);
    printf("Друге число: ");
    scanf("%d",&b);
    x = a+b;
    printf("-------------\n");
    printf("Сума двох чисел: %5.2f \n",x);
    y = a/b;
    printf("Ціла частина від ділення 1-го на 2-е: %5.0f\n",y);
    z = 3*(a*b);
    printf("Потроєний добуток першого і другого чисел: %.0f\n",z);
    return 0;
}
