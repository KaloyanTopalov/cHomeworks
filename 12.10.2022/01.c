#include <stdio.h>
#include <stdlib.h>
/*Задача 1. Да се направи програма, която заделя динамичен масив с брой
елементи зададени от потребителя. За всеки елемент от масива се очаква
потребителят да въведе цяло и число и след това се изчислява сумата на
всички елементи от масива*/

int main (){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int sum = 0;
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("%d\n", sum);
}