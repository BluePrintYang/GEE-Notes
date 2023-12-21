#include <stdio.h>
#include <stdlib.h>
/*
二叉树转中缀表达式

请设计一个算法，将给定的表达式树(二叉树)转换为等价的中缀表达式
(通过括号反映操作符的计算次序)并输出。例如，当下列两棵表达式树作为算法的输入时：
 */

// 存储操作数或操作符

typedef struct node
{
    char data[10];
    struct node *left, *right;
} BTree;

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