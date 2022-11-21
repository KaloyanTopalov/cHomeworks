/* Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

double multiply(void)
{
double i, sum = 1;

for (i = 0; i <=30; i++)
    {
    sum *= i;
    }
    printf("%ld",sum);
}

int main()
{
multiply();
}
