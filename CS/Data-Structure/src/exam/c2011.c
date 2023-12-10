#include <stdio.h>

/*
两个有序序列的中位数
一个长度为L (L≥1) 的升序序列S，
处在第L/2个位置的数称为S中位数。
例如，若序列 S1=(11,13,15,17,19),则S1的中位数是15。
两个序列的中位数是含它们所有元素的升序序列的中位数。
例如。若S2=(2,4,6,8,20),则S1和S2的中位数是11。
现有两个等长的升序序列A和B。
试设计一个在时间和空间两方面都尽可能高效的算法，
找出两个序列A和B的中位数。
 */

int M_Search(int A[], int B[], int n)
{
    int s1, d1, m1, s2, d2, m2;
    s1 = 0;
    d1 = n - 1;
    s2 = 1;
    d2 = n - 1;
    while (s1 != d1 || s2 != d2)
    {
        m1 = (s1 + d1) / 2;
        m2 = (s2 + d2) / 2;
        if (A[m1] == B[m2])
        {
            return A[m1];
        }
        if (A[m1] < B[m2])
        {
            if ((s1 + d1) % 2 == 0)
            {
                s1 = m1;
                d2 = m2;
            }
            else
            {
                s1 = m1 + 1;
                d2 = m2;
            }
        }
        else
        {
            if ((s1 + d1) % 2 == 0)
            {
                d1 = m1;
                s2 = m2;
            }
            else
            {
                d1 = m1;
                s2 = m2 + 1;
            }
        }
    }
    return A[s1] < B[s2] ? A[s1] : B[s2];
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test()
{
    // Test case for M_Search function

    // Initialize two sorted arrays
    int arrayA[] = {1, 3, 5, 7, 9};
    int arrayB[] = {2, 4, 6, 8, 10};
    int size = sizeof(arrayA) / sizeof(arrayA[0]);

    // Call the M_Search function
    int result = M_Search(arrayA, arrayB, size);

    // Print the result
    printf("Median Element: %d\n", result);
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}