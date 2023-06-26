#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int str, end, year;
    year = 0;
    do
    {
        str = get_int("Start size : ");  // To make Prompt for starting size of llamas

    }
    while (str < 9);
    do
    {
        end = get_int("End size : ");   // to make Prompt for ending size of llamas
    }
    while (end < str);
    while (str < end)
    {
        str = str + (str / 3) - (str / 4); // To Calculate number of years until we reach threshold
        ++year;
    }
    printf(" Years: %i \n", year);  
    // To Print number of total years

}