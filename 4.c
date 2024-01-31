#include <stdio.h>
#include <stdbool.h>

int main()
{
    int l, u;

    printf("Enter lower and upper range: ");
    scanf("%d %d", &l, &u);

    if (l > u)
    {
        printf("Invalid range.\n");
        return 1;
    }

    for (int i = l; i <= u; ++i)
    {
        if (i < 2)
        {
            continue;
        }

        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
