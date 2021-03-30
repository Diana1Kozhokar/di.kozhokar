#include <stdio.h>
#include <math.h>
int main(){
    int s, t;
    float o = 0;
    printf("Введіть число а: ");
    scanf("%d", &s);
    printf("Введіть число t: ");
    scanf("%d", &t);
    printf("-----------------------\n");
    if(s==-7)   o =s/t + 2*s*t;
    if(s==7)    o =(float)sqrt(s/t + 2*s*t);
    if(s==14)   o =s*s+2*t;
    if(s!=-7 && s!=7 && s!=14){
        printf("Неможливо обчислити значення виразу!");
        return 0;
    }
    printf("Результат обчислення скороченою формою if: %.2f. ", o);
    if(s==-7)   o = s/t + 2*s*t;
    else if(s==7)    o = (float)sqrt(s/t + 2*s*t);
    else if(s==14)   o = s*s+2*t;
    printf("\nРезультат обчислення повною формою if else: %.2f. ", o);
    return 0;
}