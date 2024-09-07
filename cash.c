#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change;
    int cents, cents2, cents3, cents4;
    int total = 0;

// allow the user to enter input
    do
    {
        change = get_float("Chane owed: ");
    }
    while (change < 0);
    change = (change * 100) / 0.01;

    //Multiply the float numbers
    if (change < 1)
    {
        change *= 100;
    }
    else if (change < 10)
    {
        change *= 10;
    }

    //Change to int
    cents = change;

    //How many quarters
    while (cents >= 2500)
    {
        cents -= 2500;
        total++;
    }
    cents2 = cents;

    //How many dimes
    while (cents2 >= 1000)
    {
        cents2 -= 1000;
        total++;
    }
    cents3 = cents2;

    //How many nickels
    while (cents3 >= 500)
    {
        cents3 -= 500;
        total++;
    }
    cents4 = cents3;

    //How many pennies
    while (cents4 >= 100)
    {
        cents4 -= 100;
        total++;
    }

    printf("%i\n", total);
}
