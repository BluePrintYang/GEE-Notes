#include <stdio.h>
#include <stdlib.h>

/*
找众数

知一个整数序列A(a0,a1,a2,...,an), 其中 0<=ai<=n(0<i<n)。
若存在 ap1=ap2=...=apm=x 且 m>n/2(0<=pk<n,1<=k<=m),
则称x为A的主元素。
例如 A= ( 0, 5, 5, 3, 5, 7, 5, 5),则5为主元素；
又如 A= ( 0, 5, 5, 3, 5, 1, 5, 7),则A中没有主元素。
假设A中的n个元素保存在一个一维数组中，
请设计一个尽可能高效的算法，找出A的主元素。
若存在主元素，则输出该元素； 否则输出-1。
 */

int Majority(int A[], int n)
{
    int i, c, count = 1;
    c = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] == c)
        {
            count++;
        }
        else
        {
            if (count > 0)
            {
                count--;
            }
            else
            {
                c = A[i];
                count = 1;
            }
        }
    }
    if (count > 0)
    {
        for (i = count = 0; i < n; i++)
        {
            if (A[i] == c)
            {
                count++;
            }
        }
    }
    if (count > n / 2)
    {
        return c;
    }
    else
    {
        return -1;
    }
}

int Majority2(int A[], int n)
{
    int *count;
    count = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[A[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[i] > n / 2)
        {
            return i + 1;
        }
    }
    return -1;
}

void test()
{
    int A[] = {0, 7, 7, 3, 7, 7, 5, 5};
    printf("%d\n", (Majority(A, 7)));
    printf("%d\n", (Majority2(A, 7)));
    int A2[] = {0, 5, 5, 3, 5, 1, 5, 7};
    printf("%d\n", (Majority(A2, 8)));
    printf("%d\n", (Majority2(A2, 8)));
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}