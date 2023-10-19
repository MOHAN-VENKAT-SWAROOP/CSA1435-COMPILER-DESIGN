#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter C code (end with a semicolon ';'):\n");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \t\n;+-*/=(),<>[]{}");
    
    while (token != NULL) {
        if (isalpha(token[0])) {
            printf("Identifier: %s\n", token);
        } else if (isdigit(token[0])) {
            printf("Constant: %s\n", token);
        } else {
            printf("Operator: %s\n", token);
        }
        token = strtok(NULL, " \t\n;+-*/=(),<>[]{}");
    }

    return 0;
}
