#include <stdio.h>

void E_2011(int arr1[], int arr2[], int size1, int size2) {
    printf("第一个数组： ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n第二个数组： ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    int midle = (size1 + size2) / 2;
    if ((size1 + size2) % 2 != 0)
    {
        midle++;
    }

    int index1 = 0, index2 = 0;
    int res = 0;
    for (int i = 0; i < midle; i++)
    {
        if (arr1[index1] <= arr2[index2])
        {
            index1++;
            res = 0;
        } else {
            index2++;
            res = 1;
        }
        // printf("\nindex1: %d index2： %d", index1, index2);

    }
    printf("\nmiddle: %d 结果： ", midle);

    if (res == 0)
    {
        printf("%d\n", arr1[index1 - 1]);
    } else {
        printf("%d\n", arr2[index2 - 1]);
    }
    
}

void E_2013(int arr[])
{
    
}

int main() {
    int arr1[] = {11, 13, 15, 17, 19};
    int arr2[] = {2, 4, 6, 8, 12, 14, 20};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    E_2011(arr1, arr2, size1, size2);

    return 0;
}
