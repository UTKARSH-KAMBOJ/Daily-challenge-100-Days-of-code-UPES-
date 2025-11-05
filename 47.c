/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

char str[100];
int a = 0;       // stores start index of longest word
int largest = 0; // stores length of longest word

void fun(int count, int pos) {
    // if current word is longer than previous longest
    if (count > largest) {
        largest = count;
        a = pos - count; // store start index of this word
    }
}

void main() {
    printf("enter the string: ");
    fgets(str, 100, stdin);

    int i = 0, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            count++;
        } else {
            fun(count, i);
            count = 0;
        }
    }

    // handle the last word (if string doesn’t end with a space)
    fun(count, i);

    // print the longest word
    printf("Longest word: ");
    for (int j = 0; j < largest; j++) {
        printf("%c", str[a + j]);
    }
    printf("\n");
}
