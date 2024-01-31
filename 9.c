#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j >= i)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
