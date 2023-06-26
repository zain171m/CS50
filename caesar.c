#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(int argc, string argv[])
{
    if (argc != 2)    //getting key from user
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    for (int k = 0 ; k < strlen(argv[1]); k++)
    {
        if (isalpha(argv[1][k]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    int key = atoi(argv[1]);  //Converting String ie. "13" into Integer 13
    string plaintext = get_string("plaintext: ");  //promt for plaintext
    printf("ciphertext: ");
    for (int f = 0, len = strlen(plaintext); f < len; f++)
    {
        char c = plaintext[f];
        if (isalpha(c))
        {
            char s = 'A';   // considering special character s to make index from 0 to 25 for alphabets
            if (islower(c))
            {
                s = 'a';
            }
            int ci = (c - s + key) % 26 + s;  // formula to convert plaintext into cyphertext
            printf("%c", (char)ci);
        }
        else
        {
            printf("%c", c);    
        }
    }
    printf("\n");
}
    