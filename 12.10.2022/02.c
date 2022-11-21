#include <stdio.h>
#include <stdlib.h>
//Задача 2. Разширяване на заделена памет с realloc.

int main (){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int sum = 0;
    int *arr = (int*) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int *arr2 = (int*)realloc(arr, 2*n*sizeof(int));

    for (int i = 0; i <2 * n; i++) {
        printf("%d\n", arr2[i]);
    }
}