//Print the ASCII value of user entered character in decimal, hex, octal format and also print the
//character for user entered ASCII value.

#include <stdio.h>

int main()
{

char ch;
int asciiValue;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII value in decimal, hexadecimal, and octal formats
    printf("ASCII value in decimal: %d\n", ch);
    printf("ASCII value in hexadecimal: %x\n", ch);
    printf("ASCII value in octal: %o\n", ch);

    // Input ASCII value from user
    printf("\nEnter an ASCII value: ");
    scanf("%d", &asciiValue);

    // Print corresponding character for the ASCII value
    printf("Character for ASCII value %d is %c\n", asciiValue, asciiValue);

return 0;
}
