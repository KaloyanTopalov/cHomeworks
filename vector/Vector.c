#include "Vector.h"

int Init(Vector* v, int c) {
    v->p = (int*)malloc(sizeof(int) * c);
    if(v == NULL) {
        puts("Not enough memort");
        return -1;
    }
    v->capasity = c;
    v->size = 0;
    return -1;
}

int GetSize(struct Vector *const v){
    return v-> size;
}
int GetCapacity(const struct Vector *const v) {
    return v-> capasity;
}

int PushBack(Vector* const v, int num) {
    if (v->size == v->capasity) {
    
    }
    v->p[v->size + 1] = num;
    v->size++;
    return 1;
}

void myRealloc(Vector* v) {
    printf("no");
}

void printVector(const Vector* const v) 
{
    if(v->size == 0) {
        return;
    }
    for(int i = 0; i <= v->size; i++) {
        printf("%d ", v->p[i]);
    }
}