/*Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

char firstname[100];

void printstring(char arr[]);

int main() {
    printf("Enter the string: ");
    fgets(firstname,100,stdin);  

    printstring(firstname);
    return 0;
}

void printstring(char arr[]) {
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count-1);
}
