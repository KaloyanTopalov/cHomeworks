#include <stdio.h>

int main()
{
 int arr[5] = {10, 23, 32, 2, 7};
 int arrSize = *(&arr + 1) - arr;
 for (int i = 0; i < arrSize; i++)
    {
    printf("%d\t",i);
    }
    printf("\n");

for (int i = 0; i < arrSize; i++)
    {
    printf("%d\t",arr[i]);
    }
}
