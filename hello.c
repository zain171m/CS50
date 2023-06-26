#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Using get string function to ask for name
    string name = get_string("What's your name? ");

    // Printf statement to say hello to user
    printf("Hello, %s!\n", name);
}