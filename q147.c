Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    // Writing to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee data stored in file.\n");

    // Reading from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee Data from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", e.name, e.id, e.salary);

    return 0;
}
