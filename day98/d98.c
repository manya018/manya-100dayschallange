//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employees.dat"
#define MAX_NAME 50

typedef struct {
    int id;
    char name[MAX_NAME];
    char department[30];
    float salary;
} Employee;

void addEmployee() {
    Employee e;
    FILE *fp = fopen(FILENAME, "ab"); 
    if (!fp) {
        perror("Unable to open file for appending");
        return;
    }

    printf("Enter employee ID: ");
    if (scanf("%d", &e.id) != 1) { 
        printf("Invalid input.\n");
        while (getchar() != '\n'); 
        fclose(fp);
        return;
    }
    while (getchar() != '\n'); 

    printf("Enter name: ");
    fgets(e.name, MAX_NAME, stdin);
    e.name[strcspn(e.name, "\n")] = '\0'; 

    printf("Enter department: ");
    fgets(e.department, sizeof(e.department), stdin);
    e.department[strcspn(e.department, "\n")] = '\0';

    printf("Enter salary: ");
    if (scanf("%f", &e.salary) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        fclose(fp);
        return;
    }

    /* write the struct as binary */
    if (fwrite(&e, sizeof(Employee), 1, fp) != 1) {
        perror("Write error");
    } else {
        printf("Employee saved.\n");
    }

    fclose(fp);
}

void listEmployees() {
    Employee e;
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) {
        perror("Unable to open file for reading");
        return;
    }

    printf("\n--- Employee List ---\n");
    int count = 0;
    while (fread(&e, sizeof(Employee), 1, fp) == 1) {
        printf("ID: %d\n", e.id);
        printf("Name: %s\n", e.name);
        printf("Department: %s\n", e.department);
        printf("Salary: %.2f\n", e.salary);
        count++;
    }
    if (count == 0) printf("No employees found.\n");

    fclose(fp);
}

void findEmployeeById() {
    int id;
    printf("Enter employee ID to search: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }

    Employee e;
    FILE *fp = fopen(FILENAME, "rb");
    if (!fp) {
        perror("Unable to open file for reading");
        return;
    }

    int found = 0;
    while (fread(&e, sizeof(Employee), 1, fp) == 1) {
        if (e.id == id) {
            printf("\nFound employee:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n",
                   e.id, e.name, e.department, e.salary);
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee with ID %d not found.\n");

    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\nEmployee Database (binary)\n");
        printf("1. Add employee\n");
        printf("2. List employees\n");
        printf("3. Find employee by ID\n");
        printf("0. Exit\n");
        printf("Choose: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        while (getchar() != '\n'); 

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: listEmployees(); break;
            case 3: findEmployeeById(); break;
            case 0: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
