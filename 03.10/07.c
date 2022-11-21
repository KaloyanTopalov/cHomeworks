//Задача 7. Направете функция struct point makepoint(int x, int y), която
//създава две точки. Използвайте malloc().

#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct Rec {
    struct point p1;
    struct point p2;
    
};

void MakePoint(struct point* p,int x, int y) {
    p->x = x;
    p->y = y;
}



int main()
{
    struct Rec screen;
    MakePoint(&screen.p1, 0,0);
    MakePoint(&screen.p2, 4,4);

    for (int i = screen.p1.x; i < screen.p2.x; i++) {
        for(int j = screen.p1.y; j < screen.p2.y; j++) {
            printf(" - ");
        }
        printf("\n");
    }
}