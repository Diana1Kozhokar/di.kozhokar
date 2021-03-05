#include <stdio.h>

int main(){
    const int a=1;
    const int b=10;
    const int c=-1;
    float y;
    y=((float)(a+b*c)/(float)(2*a-b-c))+(float)(a/(b+2));
    printf("Відповідь: %5.2f",y);
    return 0;
}