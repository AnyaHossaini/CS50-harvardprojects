#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //Gets the height from the user
        n = get_int("Height: ");
    }
    // If the height is less than 1 or greater than 8 will repromt them
    while (n < 1 || n > 8);
    //height
    for (int i = 1; i < (n + 1); i++)
    {
        //width
        for (int j = 1; j <= (n - i); j++)
        {
            //printf("#");
            printf(" ");
        }
        //This will print out the #
        for (int k = 1; k <= (i); k++)
        {
            printf("#");
            //printf(".");
        }
        printf("\n");
    }
}
