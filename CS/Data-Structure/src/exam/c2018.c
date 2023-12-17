#include <stdio.h>
#include <stdlib.h>
/*
数组未出现的最小正整数

给定一个含n(n>=1) 个整数的数组，
请设计一个在时间上尽可能高效的算法，
找出数组中未出现的最小正整数。
例如，数组{-5,3,2,3}中未出现的最小正整数是 1;
数组{1,2,3}中未出现的最小正整数是4。
 */

int smallest(int a[], int n)
{
    int *p;
    p = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        p[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] <= n)
        {
            p[a[i] - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] == 0)
        {
            return p[i] + 1;
        }
    }
    return n + 1;
}

void test()
{
    int A[] = {-5, 3, 2, 10};
    printf("%d\n", (smallest(A, 4)));
    int A2[] = {1, 2, 3};
    printf("%d\n", (smallest(A2, 3)));
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}