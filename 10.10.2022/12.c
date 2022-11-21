#include <stdio.h>

//Задача 12. Напишете макро GENERIC_MAX(type), което трябва да се
//замени със следната функция:

#define max(a,b) \
({typeof (a) _a = (a); \
typeof (b) _b = (b); \
_a > _b ? _a : _b;})

int main()
{
    printf("%f\n", if (1 > 2) {12});
    return 0;
}