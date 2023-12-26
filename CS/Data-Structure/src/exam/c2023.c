#include <stdio.h>
#include <stdlib.h>
#define MAXV 100

/*
出度大于入度的结点
 */

typedef struct
{                              // 图的定义
    int numVertices, numEdges; // 图中实际的顶点数和边数
    char VerticesList[MAXV];   // 顶点表。MAXV 为已定义常量
    int Edge[MAXV][MAXV];      // 邻接矩阵
} MGraph;

int printVertices(MGraph G)
{
    int indegree, outdegree, k, m, count = 0;
    for (k = 0; k < G.numVertices; k++)
    {
        indegree = outdegree = 0;
        for (m = 0; m < G.numVertices; m++)
        {
            outdegree += G.Edge[k][m];
        }
        for (m = 0; m < G.numVertices; m++)
        {
            indegree += G.Edge[m][k];
        }
        if (outdegree > indegree)
        {
            printf("%c", G.VerticesList[k]);
            count++;
        }
    }
    return count;
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