//Задача 1. Напишете обединение от три стойности: цяло число, число с 
//плаваща запетая и низ. Инициализирайте отделните членове и ги изведете на екрана.

#include <stdio.h>

union Num {
    int x;
    float y;
    char string[10];
};
  
int main()
{
    union Num n;
    n.x = 12;
    printf("%d\n",n.x);
    n.y = 2332.2112;
    printf("%f\n",n.y);
    n.string[0] = 'k';
    printf("%s",n.string);

}