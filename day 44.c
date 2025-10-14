/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int count = 0;
int spaces = 0;
int digit = 0;
int special = 0;
int i = 0;

int main() {
    char string[100];    

    printf("enter the string you want to print:");
    fgets(string, 100, stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || 
            (string[i] >= 'A' && string[i] <= 'Z')) {
            count++;
        }
        else if (string[i] == ' ') {
            spaces++;
        }
        else if (string[i] >= '0' && string[i] <= '9') {
            digit++;
        }
        else if (string[i] != '\n') {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digit, special);
    return 0;
}
