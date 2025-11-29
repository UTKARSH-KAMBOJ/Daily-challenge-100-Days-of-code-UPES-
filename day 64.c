//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    scanf("%s", s);

    int n = strlen(s);
    int max_len = 0;

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++) {

            // Make temp substring from s[i] to s[j-1]
            char temp[500];
            int len = j - i;
            strncpy(temp, s + i, len);
            temp[len] = '\0';      // null terminate

            // If s[j] already exists in temp, break
            if (strchr(temp, s[j]) != NULL) {
                break;
            }

            // Otherwise, substring length increased
            int curr_len = j - i + 1;

            if (curr_len > max_len) {
                max_len = curr_len;
            }
        }
    }

    printf("%d", max_len);

    return 0;
}
