#include <stdio.h>
#include <math.h>
int main(){
    do {
        float a, b, c, S;
        printf("Задайте гіпотенузу - ");
        scanf("%f", &c);
        printf("Задайте катет - ");
        scanf("%f", &a);
        printf("----------------\n");
        if(a <= 0 || c <= 0){
            printf("Довжини сторін трикутника не можуть бути від'ємними, чи дорівнювати нулю!\n");
        }
        else if(c < a){
            printf("Гіпотенуза не може бути меншою за катет!\n");
        }
        else{
            b = sqrt(c*c - a*a);
            S = (a*b)/2;
            printf("a, b - катети\n с - гіпотенуза\nS - площа\n");
            printf("a\tb\tc\tS\n");
            printf("%.2f\t%.2f\t%.2f\t%.2f\n", a, b, c, S);
            printf("----------------\n");

        }
    }
    while (1);
}
