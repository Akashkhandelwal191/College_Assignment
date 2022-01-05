/*
Q7.Write a C Program that count number of vowels and consonants in a string using function
*/
#include <stdio.h>

void Count(char str[])
{

    int vowel = 0;
    int consonant = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    
    printf("\nVowel :%d", vowel);
    printf("\nConsonant : %d", consonant);
}

void main()
{

    char str[100];
    printf("\nEnter an String:");
    gets(str);
    printf("\nYour Input String is : %s", str);
    Count(str);
}