#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    // gets amount of change owed from the user
    float amount;
    
    do
    {
        printf("How much change is owed?\n");
        amount = GetFloat();
    }   while (amount < 0);
    
    // converts amount of change to cents
    float cents = amount * 100;
    int total_cents = round(cents);
    
    //  checks to see how many quarters go into amount owed
    int quarters;
    for (quarters = 0; total_cents >= 25; quarters++)
    {
        total_cents = total_cents - 25;
    }

    //  checks to see how many dimes go into amount owed
    int dimes; 
    for (dimes = 0; total_cents >= 10; dimes++)
    {
        total_cents = total_cents - 10;
    }

    // checks to see how many nickels go into amount owed    
    int nickels;
    for (nickels = 0; total_cents >= 5; nickels++)
    {
        total_cents = total_cents - 5;
    }

    // checks to see how many pennies go into amount owed    
    int pennies;
    for (pennies = 0; total_cents >= 1; pennies++)
    {
        total_cents = total_cents - 1;
    }

    // totals and prints the number of coins    
    int total_coins = quarters + dimes + nickels + pennies;
    printf("%d\n", total_coins);
}

