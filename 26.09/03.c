#include <stdio.h>

void isPalindrom(char input[], int size)
{
    int forwardIter = 0;
    int backwardIter = 0;

    while(forwardIter < backwardIter)
    {
        if(*(input + forwardIter) != *(input+backwardIter))
        {
            printf("No");
            return;
        }
        forwardIter++;
        backwardIter++;
    }
    printf("Yes");

}

int getSize(char input[], int limit)
{
    int size = 0;
    while (*input != '\0')
    {
        size++;
        input++;
    }
    return size;
}


int main()
{
    char input[100] = {};
    scanf("%s", &input);
    int size = getSize(input, 100);
    isPalindrom(input, size);

    return 0;
}
