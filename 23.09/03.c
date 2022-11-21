
/* Напишете програма, която проверява дали две дадени матрици са
еднакви, сравнявайки съответните елементи в тях. Разпечатайте в конзолата
двете изходни матрици и резултата от сравнението.
*/


#include <stdio.h>
#define SIZE 2
void initialiseArray(int arr[][SIZE],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Enter element %d %d: ", i, j );
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int arr[SIZE][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            {
            printf("%d ", arr[i][j] );
            }
        printf("\n");
    }
}

int main() {
    int array01[SIZE][SIZE], array02[SIZE][SIZE];
    int row = 2 ;
    int col = 2;
    int isEqual = 1;

    initialiseArray(array01, row, col);
    initialiseArray(array02, row, col);

    for(int i = 0; i < row && isEqual; i++)
    {
        for (int j = 0; j < col && isEqual; j++)
        {
            if (array01[i][j] != array02[i][j])
            {
                isEqual = 0;
            }      
        }     
    }
    printArray(array01, row, col);
    printf("\n");
    printArray(array02, row, col);

    if(isEqual == 1)
    {
        printf("They are equal");
    }
    else
    {
        printf("They are not equal");
    }

  return 0;
}
