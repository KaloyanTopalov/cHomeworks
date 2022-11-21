#include <stdio.h>
#include <stdlib.h>

int main() {
    puts("Enter mem block size: ");
    int block = 0;
    scanf("%d", &block);
    char* ptr = (char*) calloc(block, sizeof(char));

    
    puts("enter new mem block size: ");
    scanf("%d", &block);

    ptr = (char*) realloc(ptr, block * sizeof(char));


}