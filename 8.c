#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0, factorial = 1.0;

    printf("Enter the number of terms for the series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        factorial *= (i + 1);
        sum += (double)i / factorial;
    }

    printf("Sum of the series: %lf\n", sum);

    return 0;
}
