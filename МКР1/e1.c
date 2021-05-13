#include <stdio.h>
#include <math.h>
int main(){
    do {
        float x, y, f;
        printf("Задайте x - ");
        scanf("%f", &x);
        printf("Задайте y - ");
        scanf("%f", &y);
        printf("----------------\n");
        if(x+y < 0){
            printf("Не можна брати корінь з від'ємного числа, задайте інші значення!\n");
        }
        else if(sqrt(x+y) == 0){
            printf("Не можна ділити на нуль, задайте інші значення!\n");
        }
        else{
            f = (x*x + y*y)/((float)sqrt(x+y));
            printf("Результат: %.2f\n", f);
            printf("----------------\n");
        }
    }
    while (1);
}
