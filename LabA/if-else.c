#include <stdio.h>

int main(void) {

    // 4. Using if-else Statements
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if number is even or odd
    if (number % 2 == 0) {
        printf("%d is an Even number.\n", number);
    }
    else {
        printf("%d is an Odd number.\n", number);
    }

    return 0;
}
