#include <stdio.h>

double atof(char* str) {
    static int shifting = 0;
    static double num = 0;
    if(*str == '\0') {
        return num / shifting;
    }
    if (*str == '.')
    {
        shifting = 1;
    }
    else if(shifting >= 1) {
        num = num * 10 + (*str - '0');
        shifting *= 10;
    }
    else {
        num = num * 10 + (*str - '0');
    }
    return atof(str+1);
}

int main() {
    double d = atof("2321.3526");
    printf("%lf ", d);

    return 0;
}