#include <stdio.h>

void printStr (char* to, char* from) 
{
    printf("BEFORE: %s\n AFTER: %s", from, to);
}

void copy (char* to, char* from) {
    static int count = 0;
    *to = *from;
    if (*to == '\0') 
    {
        return;
    }
    counter++;
    copy(to+1, from+1);
    counter--;
    if (counter == 0)
    {
        printStr(to, from);
    }
}

int main() 
{
    char to[60];
    copy(to, "This is test string");

    return 0;
}