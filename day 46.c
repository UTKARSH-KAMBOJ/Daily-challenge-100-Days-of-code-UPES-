/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

char string[100];
int i;

void fun(char arr[]);

void main() {
    printf("enter the string: ");
    fgets(string, 100, stdin);
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }

    fun(string);
}

void fun(char arr[]) {
    int j = 0;

    for (i = 0; arr[i] != '\0'; i++) {
        if (!(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
              arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')) {
            arr[j++] = arr[i];
        }
    }
    arr[j] = '\0';

    puts(arr);
}
