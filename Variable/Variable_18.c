#include <stdio.h>
#include <stdbool.h>
int main()
{
int caravan = 3;
int priceCaravan = 90;
int camper = 3;
int priceCamper = 100;
int num = 0;
int days = 0;
int money = 0;
bool stop = false;
while (num != true)
{
    printf("1-caravan\n2-camper \n: ");
    scanf("%d", &num);
    printf("How much days?: ");
    scanf("%i", &days);
    if (num < 1 || num > 2)
    {
    stop = true;
    break;
    }

    else if (num == 1)
    {
    money = days * priceCaravan;
    }
    else if (num == 2)
    {
    money = days * priceCamper;
    }

    printf("\nDo you want to stay? If no press 3\n");

}
printf("You should pay: %d\n", money);


}

