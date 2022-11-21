/*Задача 2. Напишете програма, която събира две дистанции, които са
изразени в километри, метри, сантиметри. Дистанциите трябва да бъдат
въведени от потребителя. Принтирайте изходните и резултатната
дистанция.
*/

#include <stdio.h>

struct Distance
{
    float km;
    float m;
    float cm;
};

typedef struct Distance type;

type ConvertDist()
{
    type conv;

    scanf("%f", &conv.m);
    conv.cm = conv.m * 100;
    conv.km = conv.m / 1000;

    return conv;
}

type resultDist(type distOne, type distTwo)
{
    type res;

    res.m = distOne.m + distTwo.m;
    res.km = distOne.km + distTwo.km;
    res.cm = distOne.cm + distTwo.cm;

    return res;
}



void print(type conv)
{
    printf("Result is:\nkm: %f\n", conv.km);
    printf("m: %f\n", conv.m);
    printf("cm: %f\n", conv.cm);
}




int main()
{
    type distOne;
    type distTwo;
    printf("Destination 1: ");
    distOne = ConvertDist();

    printf("Destination 2: ");
    distTwo = ConvertDist();

    type res = resultDist(distOne, distTwo);

    print(res);

    return 0;
    
}
