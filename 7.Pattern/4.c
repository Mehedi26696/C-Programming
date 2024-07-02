#include <stdio.h>

int main() {
    int rows = 4;  // Number of rows to print

    for (int i = 1; i <= rows; ++i) {
        for (char ch = 'A'; ch <= 'D'; ++ch) {
            printf("%c ", ch);  // Print each character followed by a space
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}