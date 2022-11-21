#include <ctype.h>
#include <stdio.h>

//4. Напишете функцията TOUPPER,
// която прави малката буква а в голяма А

#define TOUPPER(ch) c = toupper(c);

int main()
{
    char c;
    TOUPPER('a');
    printf("%c", c);
}