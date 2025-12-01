Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[30];
    printf("Enter input (Format: Gender=MALE): ");
    scanf("%s", input);

    char genderStr[20];
    sscanf(input, "Gender=%s", genderStr);

    struct Person p;

    if (strcmp(genderStr, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(genderStr, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        default:     printf("Other\n");
    }

    return 0;
}
