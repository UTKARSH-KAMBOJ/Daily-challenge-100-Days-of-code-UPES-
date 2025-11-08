/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char first[50], last[50];

    // Read first name and last name
    scanf("%s %s", first, last);

    // Print initials
    printf("%c.%c.", first[0], last[0]);

    return 0;
}
