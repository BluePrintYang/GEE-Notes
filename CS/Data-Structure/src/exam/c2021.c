#include <stdio.h>
#include <stdlib.h>
#define MAXV 100
/*
重排链表

已知无向连通图 G 由顶点集 V和边集 E 组成，|E|>0 ,
当 G 中度为奇数的顶点个数为不大于2 的偶数时，
G 存在包含所有边且长度为|E|的路径 (称为 EL 路径)。
设图 G 采用邻接矩阵存储，类型定义如下：


请设计算法 int IsExistEL(MGraph G),
判断 G 是否存在 EL 路径，若存在，则返回1，否则返回 0。
 */

typedef struct
{                              // 图的定义
    int numVertices, numEdges; // 图中实际的顶点数和边数
    char VerticesList[MAXV];   // 顶点表。MAXV 为已定义常量
    int Edge[MAXV][MAXV];      // 邻接矩阵
} MGraph;

int IsExistEL(MGraph G)
{
    int degree, i, j, count = 0;
    for (i = 0; i < G.numVertices; i++)
    {
        degree = 0;
        for (j = 0; j < G.numVertices; j++)
        {
            degree += G.Edge[i][j];
        }
        if (degree % 2 != 0)
        {
            count++;
        }
    }
    if (count == 0 || count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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