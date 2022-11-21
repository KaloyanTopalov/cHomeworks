#include <stdio.h>
#include <ctype.h>
int main()
{
/*Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с
малка буква*/
        int i = 0;

    char word[] = "HELLO\n";
    char chr;

    while (word[i])
    {
        chr = word[i];
        printf("%c", tolower(chr));
        i++;
    }

    return 0;
}
