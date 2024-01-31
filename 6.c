#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, sum = 0, numDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++numDigits;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        int digit = originalNumber % 10;
        sum += pow(digit, numDigits);
        originalNumber /= 10;
    }

    if (sum == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
