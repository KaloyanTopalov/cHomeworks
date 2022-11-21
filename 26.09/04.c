#include <stdio.h>

void sort (int a[], int n)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < n -1; i++)
    {
        int *ptr = a + 1;
        for (j = i + 1; j < n; ++j)
        {
            if (*a > *ptr)
            {
                temp = *a;
                *a = *ptr;
                *ptr = temp;
                break;
            }
            ptr++;
        }
        a++;
    }
}

void printArray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr+i));
    }
}

int main()
{
    int arr[] = {1,4 ,5, 2, 8};
    sort(arr, 5);
    printArray(arr,5);

}
