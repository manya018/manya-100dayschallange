//Write a program to take a number as input and print its equivalent binary representation.

 #include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary by repeatedly dividing by 2
    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;        // reduce number
        i++;
    }

    printf("Binary: ");
    // print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

