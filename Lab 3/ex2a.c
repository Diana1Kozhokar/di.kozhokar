#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, x3, y1, y2, y3;
    float AB, AC;
    printf("Точка А, координата х: ");
    scanf("%f", &x1);

    printf("Точка А, координата y: ");
    scanf("%f", &y1);

    printf("Точка B, координата х: ");
    scanf("%f", &x2);

    printf("Точка B, координата х: ");
    scanf("%f", &y2);

    printf("Точка C, координата х: ");
    scanf("%f", &x3);

    printf("Точка C, координата х: ");
    scanf("%f", &y3);
    printf("-----------------------\n");

    AB=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    AC=sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
    if(AB > AC){
        printf("До точки А(%.0f, %.0f) ближча точка B(%.0f, %.0f), відстань між ними - "
               "%.1f", x1, y1, x2, y2, AB);
    }
    else if(AB < AC){
        printf("До точки А(%.0f, %.0f) ближча точка C(%.0f, %.0f), відстань між ними - "
               "%.1f", x1, y1, x3, y3, AC);
    }
    else
        printf("Точки В та С знаходяться на однаковій відстані до точки А - %.1f", AC);

    return 0;

}