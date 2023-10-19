#include <stdio.h>
#include<string.h>
int main() {
    char input[1000];
    int wordCount = 0, lineCount = 0;
    printf("Enter text (Press Enter on an empty line to end input):\n");
    while (1) {
        gets(input);
        if (input[0] == '\0') {
            break;
        }
        lineCount++;
        char *token = strtok(input, " ");
        while (token != NULL) {
            wordCount++; 
            token = strtok(NULL, " ");
        }
    }
    printf("\nNumber of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);
    return 0;
}
