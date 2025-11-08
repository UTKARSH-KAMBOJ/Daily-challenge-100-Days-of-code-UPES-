/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char first[50], middle[50], last[50];

    // Read up to 3 names
    int count = scanf("%s %s %s", first, middle, last);

    if (count == 3) {
        printf("%c.%c. %s", first[0], middle[0], last);
    } 
    else if (count == 2) {
        printf("%c. %s", first[0], middle);
    } 
    else {
        printf("Please enter at least two names.");
    }

    return 0;
}
