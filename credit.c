#include<stdio.h>
#include<cs50.h>
#include<math.h>


int main()
{
    long n = get_long("Enter Credit Card Number: ");
    int d1, d2, len, m = 0;
    long cc = n;
    long x = n;
    long s = n;
    cc = n;
    while (cc > 0)
    {
        cc = cc / 10;
        m += 1;
    }
    len = m;
    if (len != 13 && len != 15 && len != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    int mod_1, mod_2, sum_1, sum_2;
    sum_1 = sum_2 = 0;
    //Calculate Sum
    do
    {
        //remove last digit
        mod_1 = x % 10;
        x = x / 10;
        sum_1 += mod_1;

        //remove 2nd last digit
        mod_2 = x % 10;
        x = x / 10;
        mod_2 = mod_2 * 2;
        d1 = mod_2 % 10;
        d2 = mod_2 / 10;
        sum_2 = sum_2 + d1 + d2;
    }
    while (x > 0);
    printf("%i\n%i",sum_1,sum_2);
    
    int ttl = sum_1 + sum_2;
    //Check Weather last number is 0 or not
    if (ttl % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    //Find out first 2 numbers
    do 
    {
        s = s / 10; 
    }
    while (s > 100);
    //Check wheather Card iiiis Master Card or not
    if ((s / 10 == 5) && (0 < s % 10 && s % 10 < 6))
    {
        printf("MASTER CARD\n");
        return 0;
    }
    //Check wheather Card is Amex or not
    else if (s / 10 == 3 && (s % 10 == 4 || s % 10 == 7))
    {
        printf("AMEX\n");
        return 0;
    } 
    //Check wheather Card is VISA or not
    else if (s / 10 == 4)
    {
        printf("VISA\n");
        return 0;
    } 
    else
    {
        printf("INVALID\n");
        return 0;
    }
}
