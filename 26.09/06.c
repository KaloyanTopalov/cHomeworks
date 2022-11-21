#include <stdio.h>

linear_search(const int a[], int size, int key);

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a) / sizeof(a[0]);
    int key = 11;

    printf("%d\n", linear_search(a,size, key));

    return 0;
}

int linear_search(const int a[], int size, int key)
{
    for (int *ptr = &a[9]; ptr >= &a[0]; ptr--)
    {
        if (*ptr == key)
        {
            return 1;
        }
    }
    return -1;
}
