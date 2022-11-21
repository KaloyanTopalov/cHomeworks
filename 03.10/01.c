#include <stdio.h>

struct  Car
{
    char brand[10];
    char model[10];
    char color[10];
    int year;
    float CC;
};

typedef struct Car type;

void print(type* car)
{
    printf("Car brand: %s\n", car->brand);
    printf("Car model: %s\n", car->model);
    printf("Car color: %s\n", car->color);
    printf("Car year: %d\n" , car-> year);
    printf("Car CC: %f\n"   , car ->  CC);
}


int main(int argc, const char * argv[]) {

    type object;

    puts("Car Brand: ");
    scanf("%s", &object.brand);

    puts("Car model: ");
    scanf("%s", &object.model);

    puts("Car color: ");
    scanf("%s", &object.color);

    puts("Car year: ");
    scanf("%d", &object.year);

    puts("Car cc: ");
    scanf("%f", &object.CC);

    print(&object);
    return 0;
}