#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
二叉树转中缀表达式

请设计一个算法，将给定的表达式树(二叉树)转换为等价的中缀表达式
(通过括号反映操作符的计算次序)并输出。例如，当下列两棵表达式树作为算法的输入时：
 */

typedef struct node
{
    char data[10]; // 存储操作数或操作符
    struct node *left, *right;
} BTree;

void BtreeToExp(BTree *root, int deep)
{
    if (root == NULL)
    {
        return;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        printf("%s", root->data);
    }
    else
    {
        if (deep > 1)
        {
            printf("(");
        }
        BtreeToExp(root->left, deep + 1);
        printf("%s", root->data);
        BtreeToExp(root->right, deep + 1);
        if (deep > 1)
        {
            printf(")");
        }
    }
}

void BtreeToE(BTree *root)
{
    BtreeToExp(root, 1);
}

void test()
{
    BTree *root = (BTree *)malloc(sizeof(BTree));
    strcpy(root->data, "*");

    root->left = (BTree *)malloc(sizeof(BTree));
    strcpy(root->left->data, "+");

    root->left->left = (BTree *)malloc(sizeof(BTree));
    strcpy(root->left->left->data, "a");
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right = (BTree *)malloc(sizeof(BTree));
    strcpy(root->left->right->data, "b");
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    root->right = (BTree *)malloc(sizeof(BTree));
    strcpy(root->right->data, "*");

    root->right->left = (BTree *)malloc(sizeof(BTree));
    strcpy(root->right->left->data, "c");
    root->right->left->left = NULL;
    root->right->left->right = NULL;

    root->right->right = (BTree *)malloc(sizeof(BTree));
    strcpy(root->right->right->data, "-");

    root->right->right->right = (BTree *)malloc(sizeof(BTree));
    strcpy(root->right->right->right->data, "d");

    // Connecting more nodes as needed for testing different cases

    printf("Expression: ");
    BtreeToE(root);
    printf("\n");

    // Clean up allocated memory after testing
    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right->left);
    free(root->right->right->right);
    free(root->right->right);
    free(root->right);
    free(root);
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}