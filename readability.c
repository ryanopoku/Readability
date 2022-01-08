#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int ltrscount = 0;
    int wrdcount = 1;
    int sencount = 0;

// this part of the code will count the words
    for (int i = 0; i < strlen(text); i++)
    {
       if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
       {
           ltrscount++;
       }
       else if (text[i] == ' ')
       {
           wrdcount++;
       }
       else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
       {
           sencount++;
       }
    }


    float grade = 0.0588 * (100 * (float) ltrscount / (float) wrdcount) - 0.296 * (100 * (float) sencount / (float) wrdcount) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}
