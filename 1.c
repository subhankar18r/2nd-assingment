#include <stdio.h>

int main()
{
    int lower_range, upper_range;

    printf("Enter lower and upper range: ");
    scanf("%d %d", &lower_range, &upper_range);

    if (lower_range > upper_range)
    {
        printf("Invalid range. Lower range should be less than upper range.\n");
        return 1;
    }

    printf("Numbers between %d and %d are: \n", lower_range, upper_range);
    for (int i = lower_range; i <= upper_range; ++i)
    {
        printf("%d ", i);
    }

    return 0;
}
