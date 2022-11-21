/*Напишете функция void reverse(char src[], char dest[]),
която обръща низа char src[ ], като същевременно го копира в char dest[].
Принтирайте двата низа на екрана, за да могат да бъдат сравнени*/

#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char src[], char dest[]) {
    static int forwardIter = 0; // 2 iterators for swapping
    static int backwardIter = 0;

    if (*(src+backwardIter) == '\0')
    {
        // if the end of src is reached stop recursion
        return;
    }

    *(dest+backwardIter) = *(src+backwardIter); // copy src in dest

    backwardIter++; // move iterator to last element
    reverse(src, dest);
    backwardIter--; // move back to front

    if(forwardIter <= backwardIter) {
        // swap front and back element
        swap(&src[forwardIter], &src[backwardIter]); // pass the elements addresses so original string is reversed
        swap(&dest[forwardIter], &dest[backwardIter]); // &(*(src+forwardIter)) is too ugly and not intuitive

        forwardIter++; // move on to next element
    }
}

int main() {
    char src[] = "This is a string.";
    char dest[60] = {};

    reverse(src, dest);

    printf("Source: %s\nDestination: %s", src, dest);

    return 0;
}