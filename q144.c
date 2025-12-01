Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure and prints its data
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter Student Details (Name Roll Marks): ");
    scanf("%s %d %f", st.name, &st.roll, &st.marks);

    // Calling function
    printStudent(st);

    return 0;
}
