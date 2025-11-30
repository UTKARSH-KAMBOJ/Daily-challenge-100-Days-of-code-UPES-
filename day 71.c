//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%99s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fptr = fopen("info.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    else{
        printf("file created successfully !data written to info.txt");
    }

    fprintf(fptr, "%s %d\n", name, age);
    fclose(fptr);

    return 0;
}
