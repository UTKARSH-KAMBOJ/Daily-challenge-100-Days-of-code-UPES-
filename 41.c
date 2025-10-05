/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

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
    

    for (int i = 0; arr[i] != '\0'; i++) {
    
        printf("%c",arr[i]);
        printf("\n");
    }

   
}
