Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to compare two students
int isSame(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0 &&
            s1.roll == s2.roll &&
            s1.marks == s2.marks);
}

int main() {
    struct Student s1, s2;

    printf("Enter details of Student 1 (Name Roll Marks): ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    printf("Enter details of Student 2 (Name Roll Marks): ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);

    if (isSame(s1, s2))
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
