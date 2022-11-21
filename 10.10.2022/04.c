#include <stdio.h>

#define Predef printf("Program Compilation Date: %s\n", \
           __DATE__); 

int main ()
{
    Predef;
}