#include <stdio.h>

int main()
{
    // 1.2 T6
    int n = 9;
    int m = 0, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= 2 * i; j++)
        {
            m++;
        }
    }
    printf("m=%d\n", m);

    // 1.2 T13 【2022统考】
    for (int n = 0; n < 100; n++)
    {
        int sum = 0;
        for (int i = 1; i < n; i *= 2)
        {
            for (int j = 0; j < i; j++)
            {
                sum++;
            }
        }
        printf("n=%d,sum=%d\n", n, sum);
    }

    return 0;
}
