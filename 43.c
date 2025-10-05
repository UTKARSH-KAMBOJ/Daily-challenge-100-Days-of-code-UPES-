/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int i = 0;
int j = 0;
int isPalindrome = 1;
char str[100];

void fun(char arr[]);

void main() {
    printf("enter the string:");
    fgets(str, 100, stdin);
    fun(str);
}

void fun(char arr[]) {
    // Calculate string length and remove newline if any
    while (arr[i] != '\0') {
        if (arr[i] == '\n') {
            arr[i] = '\0'; // remove newline from fgets
            break;
        }
        i++;
    }

    j = i - 1;

    for (int k = 0; k < j; k++, j--) {
        if (arr[k] != arr[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}
