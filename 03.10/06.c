#include <stdio.h>
#include <stdlib.h>
 
struct point{
    int pointA;
    int pointB;
};
typedef struct point point;
 
point makepoint(int  x ,int y){
 
    point *ptr = (*point) malloc(sizeof(point));
    ptr->pointA = x ;
    ptr->pointB = y;
 
    return prt;
}
 
int main(){
 
    point a = makepoint(2,3);
    point b = makepoint(4,5);
    printf("%d %d",a.pointA,a.pointB);
 
}