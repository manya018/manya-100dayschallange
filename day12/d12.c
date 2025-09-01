Write a program to calculate a library fine based on late days.

  #include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (days > 30) {
        printf("Membership cancelled due to late return beyond 30 days!\n");
    }
    else {
        // Calculate fine using for loop
        for (int i = 1; i <= days; i++) {
            if (i <= 5) {
                fine += 1;
            }
            else if (i <= 10) {
                fine += 2;
            }
            else {
                fine += 5;
            }
        }
        printf("Fine: Rs %d\n", fine);
    }

    return 0;
}
