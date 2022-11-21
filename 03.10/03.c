#include <stdio.h>

/*Задача 3. Напишете програма, която калкулира разликата на два времеви
периода, изразени във векове, години, месеци, дни, минути, секудни.
Принтирайте изходните периоди и резултата.*/

struct Period {
    int century;
    int year;
    int month;
    int day;
    int minute;
    int sec;
};

typedef struct Period prd;

void CalcPeriod(prd period1, prd period2) {
    prd resPeriod = {};
    resPeriod.century = period1.century - period2.century;
    resPeriod.year = period1.year - period2.year;
    resPeriod.month = period1.month - period2.month;
    resPeriod.day = period1.day - period2.day;
    resPeriod.minute = period1.minute - period2.minute;
    resPeriod.sec = period1.sec - period2.sec;

    while (resPeriod.sec > 60)
    {
        resPeriod.minute += 1;
        resPeriod.sec -= 60;
    }
    while (resPeriod.minute > 1440)
    {
        resPeriod.day += 1;
        resPeriod.minute -= 1440;
    }
    while (resPeriod.day > 31)
    {
        resPeriod.month += 1;
        resPeriod.day -= 31;
    }
    while (resPeriod.month > 12)
    {
        resPeriod.year += 1;
        resPeriod.month -= 12;
    }
    while (resPeriod.year > 100)
    {
        resPeriod.century += 1;
        resPeriod.year -= 100;
    }
    
    printf("Centuries %d Years %d Months %d Days %d Minutes %d Seconds %d", resPeriod.century, resPeriod.year, resPeriod.month, resPeriod.day, resPeriod.minute, resPeriod.sec);
    
}

prd initPeriod(void)
{
    prd period = {};
    printf("Century: \n");
    scanf("%d", &period.century);
    printf("Year: \n");
    scanf("%d", &period.year);
    printf("Month: \n");
    scanf("%d", &period.month);
    printf("DAy: \n");
    scanf("%d", &period.day);
    printf("Minutes: \n");
    scanf("%d", &period.minute);
    printf("Seconds: \n");
    scanf("%d", &period.sec);

    return period;

}

int main() {

    prd period1= {};
    prd period2= {};

    period1 = initPeriod();
    period2 = initPeriod();

    CalcPeriod(period1, period2);


    return 0;
}