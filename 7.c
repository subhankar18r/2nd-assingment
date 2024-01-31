#include <stdio.h>

int main()
{
    int number, reversedNumber = 0, originalNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        printf("%d is a Palindrome number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a Palindrome number.\n", originalNumber);
    }

    return 0;
}
