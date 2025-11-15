#include <stdio.h>

int main(void) {

    // 2. Using Operators
    printf("\n=== Arithmetic Operators ===\n");

    int a = 35, b = 5;

    // Arithmetic operations
    printf("Addition: %d\n", a + b);          // 35 + 5 = 40
    printf("Subtraction: %d\n", a - b);       // 35 - 5 = 30
    printf("Multiplication: %d\n", a * b);    // 35 * 5 = 175
    printf("Division: %d\n", a / b);          // 35 / 5 = 7


    printf("\n=== Logical Operators ===\n");

    // Using AND (&&)
    // Returns 0 (false) because a > 10 is true but b > 20 is false
    printf("AND (&&): %d\n", a > 10 && b > 20);

    // Using OR (||)
    // Returns 1 (true) because at least one condition (a > 10) is true
    printf("OR (||): %d\n", a > 10 || b == 20);

    // Using NOT (!)
    // Returns 1 (true) because (a < 20) is false, and NOT reverses it
    printf("NOT (!): %d\n", !(a < 20));


    printf("\n=== Assignment Operators ===\n");

    // Operations on 'a'
    a += 25;
    printf("a += 25 → %d\n", a);

    a -= 15;
    printf("a -= 15 → %d\n", a);

    a *= 5;
    printf("a *= 5 → %d\n", a);

    a /= 7;
    printf("a /= 7 → %d\n", a);

    a %= 10;
    printf("a %%= 10 → %d\n", a);


    printf("\n");

    // Operations on 'b'
    b += 35;
    printf("b += 35 → %d\n", b);

    b -= 3;
    printf("b -= 3 → %d\n", b);

    b *= 9;
    printf("b *= 9 → %d\n", b);

    b /= 5;
    printf("b /= 5 → %d\n", b);

    b %= 1;
    printf("b %%= 1 → %d\n", b);


    printf("\nAll operations completed successfully!\n");

    return 0;
}