#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Define what is being used
    double quarter = 25;
    double dime = 10;
    double nickle = 05;
    double penny = 01;

    // Creating change due
    float changeDue;

    do
    {
        //Get Change owed
        changeDue = get_float("Change: ");

    }
    while (changeDue <= 0);

    // this will round the change to not overload the computer
    changeDue = round(changeDue * 100);

    // Count will keep track of how many coins you can use
    int count = 0;

    // while change isn't 0, you put -1 because it's possible to owe 0 then you want to print
    while (changeDue != -1)
    {
        // If the change is greater than 25 use all the quarters you can
        if (changeDue >= quarter)
        {
            changeDue -= quarter;
        }
        //If the change is greater than a dime but less than 25 use all the dimes
        else if (changeDue >= dime && changeDue < quarter)
        {
            changeDue -= dime;
        } 
        // If the change is more than 5 cents but less than 10 use this
        else if (changeDue >= nickle && changeDue < dime) 
        {
            changeDue -= nickle;
        }
        // If the change is more than a penny and less than 5 use this 
        else if (changeDue >= penny && changeDue < nickle)
        {
            changeDue -= penny;
        }
        // If change is less than penny print out and set change to -1 
        else if (changeDue < penny)
        {
            printf("%i\n", count);
            changeDue = -1; // This will stop the infite loop that would occur
        }
        count++; // Everytime the while loop runs it will come here, therefor we only need to add once.
    }
}


