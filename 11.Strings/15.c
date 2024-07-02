// Write down a program that
// will take a word as input and
// will determine whether the
// word is palindrome or not. A
// palindrome is a word that
// reads the same backward as forward

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int low = 0;
    int high = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return 0; // not a palindrome.
        }
        low++;  // move the low index forward
        high--; // move the high index backwards
    }
    return 1; // is a palindrome
}

int main()
{
    
    char str[100];
    scanf("%s", str);

    printf("%s is palindrome %d\n", str, isPalindrome(str));

    return 0;
}