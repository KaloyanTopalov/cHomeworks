/*Напишете функция, която прави същото, както в задача
6, но е рекурсивна*/

#include<stdio.h>

long double multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %lf", n, multiplyNumbers(n));
    return 0;
}

long double multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
