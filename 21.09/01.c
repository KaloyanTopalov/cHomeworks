/*Напишете функция, която печата низ, като принтирате всеки
символ поотделно. Указателя към началото му е подаден като аргумент на
функцията void printstr(char *s); Не забравяйте, низът винаги
завършва с знак за терминираща нула '\0', затова проверката в цикъла, който
принтира всеки символ, трябва да е докато не се стигне този знак.*/


#include <stdio.h>
unsigned factorial(unsigned int uValue)
{
    static unsigned int level = 1;

    if (uValue < 2)
        {
            return 1;
        }
    else
        {
        return uValue * factorial(uValue - 1);
        }
}

int main()
{
printf("%d",factorial(5));
return 0;
}
