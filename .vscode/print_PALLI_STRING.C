#include <stdio.h>
#include <string.h>

void printPalindrome(char str[]) {
    int len = strlen(str);
    
    // Print the original string
    printf("%s\n", str);
    
    // Print the string in reverse order
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    
    printf("Output: ");
    printPalindrome(input);
    
    return 0;
}