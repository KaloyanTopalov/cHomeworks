#include <stdio.h>
#include <math.h>
/*Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13.*/


void Area()
{
double r;
double area;
double const pi = 3.14159;
printf("r = ");
scanf("%lf", &r);
area = pi * (r * r);
printf("Area = %lf", area);
}

int main()
{
Area();
return 0;
}
