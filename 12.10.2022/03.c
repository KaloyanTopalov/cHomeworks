/*Задача 3 Напишете функции, с помощта на
 които да реализирате динамичен масив от
  елементи, чиято големина може да се променя 
  по време на изпълнение на програмата
*/
#include <stdio.h>
#include <stdlib.h>

int* Init(const unsigned blocks,const unsigned numOfBytes) {
    return calloc(blocks ,numOfBytes);
}

int* ReInit(int* old, const unsigned numOfBytes) {
    return realloc(old, numOfBytes);
}

int main() {
    int blocks = 4;
    int* ptr = Init(blocks, sizeof(int));
    if(ptr == NULL)
    {
        return -1;
    }
    long long count = 0;
    while (1) {
        printf("%d, ", ptr);

        if (count > blocks -1)
        {
            ptr = ReInit(ptr, (count + blocks) * sizeof(int));
            blocks = count + blocks;
        }
    }
}