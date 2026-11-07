#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b, result, ch;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    choice = ch;

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Addition = %d", result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("Subtraction = %d", result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("Multiplication = %d", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}