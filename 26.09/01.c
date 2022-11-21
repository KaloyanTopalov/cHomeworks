/*Задача 1. Напишете програма, която сумира всички елементи на масив намиращи се
на нечетна позиция. Масива да бъде въведен от потребителя. Разпечатайте в конзолата масива и сумата.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row = 5;
    int arr[5];
    for (int i = 0; i < row; i++)
    {
      printf("Enter element %d: ", i);
      scanf("%d", &arr[i]);
    }
    int oddSum=0,evenSum=0;

    for(int i=0; i < row; i++)
    {
        if(arr[i]%2==0)
        {
        evenSum=evenSum+arr[i];
        }
    else{
             oddSum=oddSum+arr[i];
        }
    }
    printf("The sum of odd numbers are: %d",oddSum);
    printf("\nThe sum of even numbers are: %d",evenSum);
    return 0;
}
