#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int row, clm, spc, height, half;
    do
    {
        height = get_int("what,s the height of mario,s pyramid :");
    }
    while (height < 1 || height > 8);
    for (row = 0 ; row < height ; row++) // OUTER FOR LOOP FOR NUMBER OF ROWS   :)
    {
        
        for (spc = 0; spc < height - row - 1; spc++) //INNER FOR LOOP FOR NUMBER OF SPACES   :)
        {
            printf(" ");
        }  
        for (clm = 0; clm <= row; clm++) //INNER FOR LOOP FOR NUMBER OF # ON LEFT SIDE OF PYRAMID  :)
        {
            printf("#");
        } 
        printf("\n"); 
    }
}