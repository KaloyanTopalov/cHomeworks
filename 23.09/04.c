#include <stdio.h>

/*Напишете програма, която сумира редовете и колоните на въведена
от потребителя матрица. Разпечатайте матрицата и резултатите в конзолата.
*/
#define row 3
#define col 3
int main()
{
    int array[row][col];
    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < col; j++)
        {
          sum += array[i][j];
          printf("%d ",sum);
        }
        printf("\n");
    }
}
