#include <stdio.h>

int main() {
    char operator;


    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("You entered addition operator (+)\n");
            break;
        case '-':
            printf("You entered subtraction operator (-)\n");
            break;
        case '*':
            printf("You entered multiplication operator (*)\n");
            break;
        case '/':
            printf("You entered division operator (/)\n");
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
