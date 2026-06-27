#include <stdio.h>

int main(void)
{
    int n, nums[10], count, i;

    scanf("%d", &n);
    while (n != -1)
    {
        for (i = 0; i < 10; i++)
            scanf("%d", &nums[i]);

        count = 0;
        for (i = 0; i < 10; i++)
        {
            if (nums[i] == n)
                count++;
        }

        printf("%d appeared %d times\n", n, count);
        scanf("%d", &n);
    }

    return 0;
}