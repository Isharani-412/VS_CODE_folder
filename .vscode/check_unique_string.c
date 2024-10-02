#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool hasUniqueCharacters(const char *word) {
    int charCount[256] = {0}; // Assuming ASCII characters
    
    while (*word != '\0') {
        if (isalpha(*word)) { // Checking if the character is an alphabet character
            if (charCount[tolower(*word)] > 0) {
                return false; // If character count is greater than 1, it's not unique
            }
            charCount[tolower(*word)]++;
        }
        word++;
            }
    return true;
}

void checkUniqueWords(const char *str) {
    char *token;
    char delimiters[] = " ,.;:\t\n"; // Delimiters for splitting words
    
    printf("Unique words with no repeated characters in the string:\n");
    
    token = strtok((char *)str, delimiters);
    while (token != NULL) {
        if (hasUniqueCharacters(token)) {
            printf("%s\n", token);
        }
        token = strtok(NULL, delimiters);
    }
}

int main() {
    char inputString[1000];
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    printf("\n");
    checkUniqueWords(inputString);
    
    return 0;
}
