#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coin_counter = 0;
    float fl_owed;
    do
    {
        printf("O hai! How  much change is owed?\n");
        fl_owed = GetFloat();
    }
    while (fl_owed < 0);
    
    int i_owed;
    i_owed = round(fl_owed * 100);
    
    while (i_owed >= quarter)
    {
        i_owed = i_owed - quarter;
        coin_counter++;
    }
    while (i_owed >= dime)
    {
        i_owed = i_owed - dime;
        coin_counter++;
    }
    while (i_owed >= nickel)
    {
        i_owed = i_owed - nickel;
        coin_counter++;
    }
    while (i_owed >= penny)
    {
        i_owed = i_owed - penny;
        coin_counter++;
    }
    printf("%d\n", coin_counter);
}
