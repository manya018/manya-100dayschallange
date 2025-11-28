//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;        
    struct Student *ptr;     

    ptr = &s;             

    ptr->roll = 101;
    strcpy(ptr->name, "Manya");
    ptr->marks = 92.5;

    printf("Student Details:\n");
    printf("Roll No: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
