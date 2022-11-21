#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int size;
   printf("Enter the size of array::");
   scanf("%d",&size);
   int randArray[size],i;
   for( i = 0; i < size; i++)
     randArray[i]=rand()%10;   //Generate number between 0 to 101

   printf("\nElements of the array:");
   for (i = 0; i < size; i++)
   {
     printf("\nElement number %d::%d",i+1,randArray[i]);
   }
   return 0;
}
