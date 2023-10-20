#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int ic = 0, cc = 0, oc = 0, m;
    char b[100], operators[30] = "", identifiers[30] = "", constants[30] = "";
    printf("Enter the string: ");
    scanf("%[^\n]", b);
    for (int i = 0; b[i] != '\0'; i++) {
        if (isalpha(b[i])) {
            identifiers[ic++] = b[i];
        } else if (isdigit(b[i])) {
            m = b[i] - '0';
            while (isdigit(b[++i])) {
                m = m * 10 + (b[i] - '0');
            }
            constants[cc++] = m;
        } else if (b[i] == '*' || b[i] == '-' || b[i] == '+' || b[i] == '=') {
            operators[oc++] = b[i];
        }
    }

    printf("Identifiers: %s\n", identifiers);
    printf("Constants: ");
    for (int j = 0; j < cc; j++) {
        printf("%d ", constants[j]);
    }
    printf("\nOperators: %s\n", operators);
    return 0;
}
