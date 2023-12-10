#include <stdio.h>

/*
数组循环左移p个位置
设将n (n>1) 个整数存放到一维数组R中。
试设计一个在时间和空间两方面都尽可能高效的算法。
将R中保存的序列循环左移p (0<p<n) 个位置，
即将R中的数据由 (XO,X1...Xn- 1)
变换为 (Xp,Xp+1...Xn-1,X0,X1...Xp-1) 。
 */

void Reverse(int R[], int left, int right)
{
    int k = left, j = right, temp;
    while (k < j)
    {
        temp = R[k];
        R[k] = R[j];
        R[j] = temp;
        k++;
        j--;
    }
}

void leftShift(int R[], int n, int p)
{
    if (p > 0 && p < n)
    {
        Reverse(R, 0, n - 1);
        Reverse(R, 0, n - p - 1);
        Reverse(R, n - p, n - 1);
    }
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
    // Test case for leftShift function

    // Initialize an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original Array: ");
    printArray(arr, size);

    // Perform a left shift by 2 positions
    int positionsToShift = 2;
    leftShift(arr, size, positionsToShift);

    // Print the array after left shift
    printf("Array after Left Shift by %d positions: ", positionsToShift);
    printArray(arr, size);
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}