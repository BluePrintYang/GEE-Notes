#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
三元组最小距离

定义三元组(a,b,c)(a、b、c 均为正数) 的距离
D=|a-b|+|b-c|+ |c-a|。
给定 3 个非空整数集合 S_1、S_2和 S_3,
按升序分别存储在 3 个数组中。
请设计一个尽可能高效的算法，
计算并输出所有可能的三元组(a,b,c)
(a in S_1,b in S_2, c in S_3) 中的最小距离。
例如 S_1={-1,0,9}, S_2={-25,-10,10,11},
 S_3={2,9,17,30,41},
则最小距离为 2, 相应的三元组为(9,10,9)。
 */

int abs_(int a)
{
    if (a < 0)
    {
        return -a;
    }
    else
        return a;
}

bool xls_min(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        return true;
    }
    return false;
}

int findMinofTrip(int A[], int n, int B[], int m, int C[], int p)
{
    int i = 0, j = 0, k = 0, D_min = INT32_MAX, D;
    while (i < n && j < m && k < p && D_min > 0)
    {
        D = abs_(A[i] - B[j]) + abs_(B[j] - C[k]) + abs_(C[k] - A[i]);
        if (D < D_min)
        {
            D_min = D;
        }
        if (xls_min(A[i], B[j], C[k]))
        {
            i++;
        }
        else if (xls_min(B[j], C[k], A[i]))
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return D_min;
}

void test()
{
    int S_1[] = {-1, 0, 9}, S_2[] = {-25, -10, 10, 11}, S_3[] = {2, 9, 17, 30, 41};
    printf("%d\n", findMinofTrip(S_1, 3, S_2, 4, S_3, 5));
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}