#include "/home/bear/Desktop/GitHub/kaloyan-topalov-S04/vector/Vector.h"

int main() {
    Vector v;
    Init(&v, 8);

    printVector(&v);
    PushBack(&v, 14);
    printVector(&v);

}
