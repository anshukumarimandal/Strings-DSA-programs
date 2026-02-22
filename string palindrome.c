#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);   // Reads string without spaces

    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1)
        printf("The  given string is a Palindrome.");
    else
        printf("The given  string is Not a Palindrome.");

    return 0;
}