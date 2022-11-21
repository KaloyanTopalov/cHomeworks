#include <stdio.h>
#include <string.h>
int main()
{
/*Задача 11. Ако имаме символен низ от символа char str[] =
“Hello”; копирайте всеки един от неговите символи в низ, който
да изглежда огледален на него. Ето така char rts[] = “ollеH”; и
принтирайте резултата.
*/

   char str[] = "hello";
    int l, i;
    l = strlen(str);
    for(i = l-1; i >= 0; i--)
    {
    printf("%c", str[i]);
    }
   return 0;
}
