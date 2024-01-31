#include <stdio.h>

int main()
{
    int n;

    printf("how many terms you want: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int first = 0, second = 1, next;

    if (n >= 1)
    {
        printf("%d ", first);
    }
    if (n >= 2)
    {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; ++i)
    {
        next = first + second;
        printf("%d ", next);

        first = second;
        second = next;
    }

    return 0;
}
