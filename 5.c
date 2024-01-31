#include <stdio.h>

int main()
{
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits of %d = %d\n", originalNumber, sum);

    return 0;
}
