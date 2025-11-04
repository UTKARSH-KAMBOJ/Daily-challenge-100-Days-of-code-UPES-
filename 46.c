/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    
    fgets(str, 100, stdin); // read input string

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // only lowercase alphabets
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) { // repeating found
                    printf("%c\n", str[i]);
                    return 0; // stop after finding first repeating
                }
            }
        }
    }

    // if no repeating character found
    printf("-1\n");
    return 0;
}
