// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[200], b[200];
    char s_clean[200], b_clean[200];
    int i, j, temp;
    printf("Enter your first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter your second string: ");
    fgets(b, sizeof(b), stdin);
    int len_1 = strlen(s);
    int len_2 = strlen(b);
    if (len_1 > 0 && s[len_1 - 1] == '\n')
        s[len_1 - 1] = '\0';
    if (len_2 > 0 && b[len_2 - 1] == '\n')
        b[len_2 - 1] = '\0';
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] = b[i] + 32;
        }
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        for (j = i + 1; b[j] != '\0'; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    if (strcmp(s, b) == 0)
    {
        printf("Both strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
