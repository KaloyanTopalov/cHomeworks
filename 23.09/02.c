/* Напишете програма, която събира две матрици (4х4) и записва резултата
 в трета такава със същия размер. Събирането на матриците
  става като намерим сумата на съответстващите елементи в тях.
   Данните за изходните матрици трябва да бъдат въведени от потребителя.
    Разпечатайте трите матрици в конзолата.
*/

void initialiseArray(int arr[][4],int row, int col)
{
     // elementite na 1vi masiv
    for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++) {
      printf("Enter element %d %d: ", i, j );
      scanf("%d", &arr[i][j]);
    }
}

#include <stdio.h>
int main() {
  int array01[4][4], array02[4][4], sumArray[4][4];
  int row = 4 ;
  int col = 4;

    initialiseArray(array01, row, col);
    initialiseArray(array02, row, col);

    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sumArray[i][j] = array01[i][j] + array02[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }


  return 0;
}
