#include <stdio.h>

/*Задача 17.* Към задача 16 да се добави втора функция,
 която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)*/

void Eclipse()
{
double a, b;
double perimeter;
double const pi = 3.14159;
printf("a and b: ");
scanf("%lf %lf ",&a ,&b );
perimeter = pi * a * b;
printf("Perimeter = %lf",perimeter);
}

void Area()
{
double r;
double area;
double const pi = 3.14159;
printf("r = ");
scanf("%lf", &r);
area = pi * (r * r);
printf("Area = %lf\n", area);
}

int main()
{
Area();
Eclipse();
return 0;
}

