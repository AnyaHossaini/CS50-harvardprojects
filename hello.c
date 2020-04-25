#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompts user to get their name
    string name = get_string("What is your name?\n");
    //outputs user name
    printf("hello, %s\n", name);
}
