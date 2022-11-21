#include <stdio.h>

int main ()
{
    int arr[10] = {100,90,80,70,60,50,40,30,20,10};
    int* p = &arr;
    p[3] = 5;
    p[4] = 33;
    p[5] = p[5] - 7;
    p[7] = p[7] + 10;
    p[10] = p[10] * 3;

    printf("%d\n",p[3]);
    printf("%d\n",p[4]);
    printf("%d\n",p[5]);
    printf("%d\n",p[7]);
    printf("%d",p[10]);


}

