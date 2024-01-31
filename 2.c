#include <stdio.h>

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

    int sum = 0;

    for (int i = l; i <= u; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of even numbers: %d\n", sum);

    return 0;
}
