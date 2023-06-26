#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed:");  //PROMT FOR AMOUNT OF DOLLARS
    }
    while (dollars <= 0);
    int cents = round(dollars * 100);   //FOR ROUNDING CENTS TO NEAREST PENNY
    int coins = 0;
    while (cents >= 25) //LOOP TO CALC
    {
        cents -= 25;
        coins++;
    }
    while (cents >= 10) //LOOP TO CALCULATE DIMS (10¢)
    {
        cents -= 10;
        coins++;
    }
    while (cents >= 5) //LOOP TO CALCULATE NICKELS (5¢)
    {
        cents -= 5;
        coins++;
    }
    while (cents >= 1) //LOOP TO CALCULATE PENNIES (1¢)
    {
        cents--;
        coins++;
    }
    printf("%i\n",     coins);  //TO PRINT NUMBER OF COINES
}