#ifndef Vector_h
#define Vector_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    int* p;

    int size;
    int capasity;
}Vector;
int Init(Vector* v, int c);

int GetSize(struct Vector *const v);
int GetCapacity(const struct Vector *const v);
int PushBack(Vector *const v,  int num);
void myRealloc(Vector* v);
void printVector(const Vector* const v);

#endif