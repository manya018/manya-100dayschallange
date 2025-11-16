//change date format from dd/04/yyyy to dd-april-yyyy 

#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    printf("Enter date in dd/mm/yyyy format:\n");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *months[] = {
        "", "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    if (mm < 1 || mm > 12) {
        printf("Invalid month\n");
        return 0;
    }

    printf("%02d-%s-%d\n", dd, months[mm], yyyy);

    return 0;
}
