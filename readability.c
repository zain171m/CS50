#include<ctype.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    string t = get_string("Text: ");
    int num_characters, num_words, num_sentences;
    num_characters = num_words = num_sentences = 0;
    for (int i = 0, len = strlen(t); i < len ; i++)
    {
        if (isalpha(t[i]))
        {
            num_characters++;
        }
        if ((i == 0 && t[i] != ' ') 
            || (i != len - 1 && t[i] == ' ' && t[i] == ' ' && t[i + 1] != ' ')) 
        {     
            num_words++;
        }
        if (t[i] == '.' || t[i] == '!' || t[i] == '?')
        {
            num_sentences++;
        }
    }
    float L = (num_characters / (float) num_words) * 100;
    float S = (num_sentences / (float) num_words) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}