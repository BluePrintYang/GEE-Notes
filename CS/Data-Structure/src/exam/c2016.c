#include <stdio.h>
#include <stdlib.h>
/*
划分数组
已知由n(n≥2)个正整数构成的集合
A={ak | 0 <= k < n},将其划分为两个不相交的子集A1和A2,
元素个数分别是n1和n2，A1和A2中元素之和分别为S1和S2。
设计一个尽可能高效的划分算法，
满足|n1-n2|最小q且|S1-S2|最大。
 */

int setPartition(int a[], int n)
{
    int pivotkey, low = 0, low0 = 0, high = n - 1, high0 = n - 1, flag = 1, k = n / 2, i;
    int s1 = 0, s2 = 0;
    while (flag)
    {
        pivotkey = a[low];
        while (low < high)
        {
            while (low < high && a[high] >= pivotkey)
            {
                --high;
            }
            if (low != high)
            {
                a[low] = a[high];
            }
            while (low < high && a[low] <= pivotkey)
            {
                ++low;
            }
            if (low != high)
            {
                a[high] = a[low];
            }
        }
        a[low] = pivotkey;
        if (low == k - 1)
        {
            flag = 0;
        }
        else
        {
            if (low < k - 1)
            {
                low0 = ++low;
                high = high0;
            }
            else
            {
                high0 = --high;
                low = low0;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        s1 += a[i];
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = k; i < n; i++)
    {
        s2 += a[i];
        printf("%d ", a[i]);
    }
    printf("\n");
    return s2 - s1;
}

void test()
{
    int A[] = {0, 7, 7, 3, 7, 7, 5, 5};
    printf("%d\n", (setPartition(A, 8)));
    int A2[] = {0, 5, 5, 3, 5, 1, 5, 7};
    printf("%d\n", (setPartition(A2, 8)));
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}