#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 0xfffffff
#define false 0
#define true 1
/*
判定二叉搜索树

顺序存储方式
 */

typedef int ElemNum;
typedef int bool;

typedef struct
{
    int SqBiTNode[MAX_SIZE];
    int ElemNum;
} SqBiTree;

bool judgeBST(SqBiTree bt)
{
    int k, m, *pmin, *pmax;
    pmin = (int *)malloc(sizeof(int) * (bt.ElemNum));
    pmax = (int *)malloc(sizeof(int) * (bt.ElemNum));
    for (k = 0; k < bt.ElemNum; k++)
    {
        pmin[k] = pmax[k] = bt.SqBiTNode[k];
    }
    for (k = bt.ElemNum - 1; k > 0; k--)
    {
        if (bt.SqBiTNode[k] != -1)
        {
            m = (k - 1) / 2;
            if (k % 2 == 1 && bt.SqBiTNode[m] > pmax[k])
            {
                pmin[m] = pmin[k];
            }
            else if (k % 2 == 0 && bt.SqBiTNode[m] < pmin[k])
            {
                pmax[m] = pmax[k];
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

void test()
{
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}