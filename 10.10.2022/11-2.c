#include <stdio.h>

//11.2 Функция AVG, която смята средното аритметично на числата от
//определен диапазон

#define AVG(x, y) res = (x + y) / 2;

int main()
{
    float res;
    AVG(5.0, 6.0)
    printf("%f", res);
}