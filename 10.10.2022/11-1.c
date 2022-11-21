#include <stdio.h>

//11.1 Функция AVG(x, y), която смята средното аритметично на две подадени
//като параметър числа

#define AVG(x, y) res = (x + y) / 2;

int main()
{
    float res;
    AVG(5.0, 6.0)
    printf("%f", res);
}