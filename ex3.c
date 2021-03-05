#include <stdio.h>
#include <math.h>
int main() {
    float a;
    int x,y,z;
    printf("Перше число: ");
    scanf("%d",&x);
    printf("Друге число: ");
    scanf("%d",&y);
    printf("Третє число: ");
    scanf("%d",&z);
    printf("-------------\n");
    a=((float)(x*x+2*x*z-y*y))/(float)(sqrt(2*x)-x*x*y);
    printf("Відповідь: %5.2f",a);
    return 0;
}
