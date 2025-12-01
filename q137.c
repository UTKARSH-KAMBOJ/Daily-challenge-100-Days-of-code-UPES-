Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST,
    INVALID
} Role;

Role getRole(char roleStr[]) {
    if (strcmp(roleStr, "ADMIN") == 0) return ADMIN;
    else if (strcmp(roleStr, "USER") == 0) return USER;
    else if (strcmp(roleStr, "GUEST") == 0) return GUEST;
    return INVALID;
}

int main() {
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%s", input);

    Role role = getRole(input);

    switch (role) {
        case ADMIN:  printf("Welcome Admin!\n"); break;
        case USER:   printf("Welcome User!\n"); break;
        case GUEST:  printf("Welcome Guest!\n"); break;
        default:     printf("Invalid Role!\n");
    }

    return 0;
}
