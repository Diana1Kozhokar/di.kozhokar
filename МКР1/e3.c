#include <stdio.h>
#include <math.h>
int main(){
    do {
        float a, x, f;
        printf("Задайте дійсне число а - ");
        scanf("%f", &a);
        printf("Задайте х - ");
        scanf("%f", &x);
        printf("----------------\n");
        if(x > 0){
            f = pow(x,2) + 5*x - 6;
        }
        else{
            f = abs(x+cos(x));
        }
        printf("Результат: %.2f\n", f);
        printf("----------------\n");
    }
    while (1);
}
