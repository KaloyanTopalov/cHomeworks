#include <stdio.h>

int main()
{
    char str[] = "hello\0";
    str[2] = 'x';
    str[3] = 'x';
    printf("%s",str);
}
