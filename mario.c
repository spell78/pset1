#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    int n;
    do
    {
    printf("Height:");
    n = GetInt();
    }
    while (n < 0 || n > 23);
    
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n-i-1; s++)
        {
            printf(" ");
        }
        for (int h = 0; h < i+2; h++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
    }    
}
