#include <stdio.h>

int gNum = 10;

void test()
{
    gNum++;
    printf("%d\n", gNum);

}

int main()
{
test();
test();
test();
}
