#include <stdio.h>

/*Задача 1. Декларирайте двумерен масив с по 5 елемента (5 x 5).
След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. Отпечатайте
 масива в конзолата, спазвайки броя редове и колони.
*/
void InsertElements(int array[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void printElements(int array[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d] = %d", i, j, array[i][j]);
        }
        printf("");
    }
}



int main()
{
    int array[5][5];
    InsertElements(array,5, 5);
    printElements(array, 5, 5);
}
