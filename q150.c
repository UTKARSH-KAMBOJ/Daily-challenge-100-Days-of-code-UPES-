Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;  // Pointer points to the structure

    // Input details via pointer
    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}
