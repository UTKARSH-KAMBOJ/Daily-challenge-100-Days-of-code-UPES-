Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Enter details of Student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < 2; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", s[0].name, &s[0].roll, &s[0].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);
    return 0;
}
