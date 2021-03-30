#include <stdio.h>
int main(){
    int x, y, z;
    float t;
        printf("\n");
        printf("Введіть число x: ");
        scanf("%d", &x);
        printf("Введіть число y: ");
        scanf("%d", &y);
        printf("Введіть число z: ");
        scanf("%d", &z);
        printf("-----------------------\n");
        if(z == 0)
            printf("z не може дорівнювати 0!");
        else if((x-1/(float)(1+x*x))==0)
            printf("Для цього х виконується ділення на 0!\n");
        else if((1+x*x)==0)
            printf("Для цього х виконується ділення на 0!\n");
        else
    t = (1+z)*((x+(float)(y/z))/(x-1/(float)(1+x*x)));
    printf("Результат: %.1f", t);
    return 0;
}