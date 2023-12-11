#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
/*
求二叉树的 WPL

二叉树的带权路径长度(WPL)是二叉树中所有叶结点的带权路径长度之和。
给定一棵二叉树T，采用二叉链表存储，结点结构为：
 left weight right
其中叶结点的 weight 域保存该结点的非负权值。
设 root 为指向 T 的根结点的指针，
请设计求T的 WPL 的算法
 */

typedef struct BiTNode
{
    int weight;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

// 基于先序遍历
int wpl_PreOrder(BiTree root, int deep)
{
    static int wpl = 0;
    if (root->lchild == NULL && root->rchild == NULL)
    {
        wpl += deep * root->weight;
    }
    if (root->lchild != NULL)
    {
        wpl_PreOrder(root->lchild, deep + 1);
    }
    if (root->rchild != NULL)
    {
        wpl_PreOrder(root->rchild, deep + 1);
    }
    return wpl;
}

int WPL(BiTree root)
{
    return wpl_PreOrder(root, 0);
}

// 不使用 wpl 函数
int wpl_PreOrder1(BiTree root, int deep)
{
    int lwpl, rwpl;
    lwpl = rwpl = 0;
    if (root->lchild == NULL && root->rchild == NULL)
    {
        return deep * root->weight;
    }
    if (root->lchild != NULL)
    {
        lwpl = wpl_PreOrder1(root->lchild, deep + 1);
    }
    if (root->rchild != NULL)
    {
        rwpl = wpl_PreOrder1(root->rchild, deep + 1);
    }
    return lwpl + rwpl;
}

// 更简便形式
int wpl_PreOrder2(BiTree root, int deep)
{
    if (root->lchild == NULL && root->rchild == NULL)
    {
        return deep * root->weight;
    }
    return (root->lchild != NULL ? wpl_PreOrder1(root->lchild, deep + 1)
                                 : 0) +
           (root->rchild != NULL ? wpl_PreOrder2(root->rchild, deep + 1)
                                 : 0);
}

// 基于层序遍历
int wpl_LevelOrder(BiTree root)
{
    BiTree q[MaxSize];
    int end1, end2;
    end1 = end2 = 0;
    int wpl = 0, deep = 0;
    BiTree lastNode;
    BiTree newlastNode;
    lastNode = root;
    newlastNode = NULL;
    q[end2++] = root;
    while (end1 != end2)
    {
        BiTree t = q[end1++];
        if (t->lchild == NULL && t->rchild == NULL)
        {
            wpl += deep * t->weight;
        }
        if (t->lchild != NULL)
        {
            q[end2++] = t->lchild;
            newlastNode = t->lchild;
        }
        if (t->rchild != NULL)
        {
            q[end2++] = t->rchild;
            newlastNode = t->rchild;
        }
        if (t == lastNode)
        {
            lastNode = newlastNode;
            deep += 1;
        }
    }
    return wpl;
}

// Function to create a sample binary tree for testing
BiTree createSampleTree()
{
    BiTree root = (BiTree)malloc(sizeof(BiTNode));
    root->weight = 1;

    root->lchild = (BiTree)malloc(sizeof(BiTNode));
    root->lchild->weight = 2;
    root->lchild->lchild = root->lchild->rchild = NULL;

    root->rchild = (BiTree)malloc(sizeof(BiTNode));
    root->rchild->weight = 3;
    root->rchild->lchild = root->rchild->rchild = NULL;

    return root;
}

void test()
{
    // Create a sample binary tree
    BiTree root = createSampleTree();

    // Test the wpl_PreOrder function
    int weightedPathLength = wpl_PreOrder(root, 0);
    int weightedPathLength2 = wpl_LevelOrder(root);

    // Display the result
    printf("Weighted Path Length (WPL): %d\n", weightedPathLength);
    printf("Weighted Path Length By LevelOeder (WPL): %d\n", weightedPathLength2);

    // Free the allocated memory for the tree
    // Note: This is a simplified example; in a real scenario, you would need a proper tree destruction function.
    free(root->lchild);
    free(root->rchild);
    free(root);
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}