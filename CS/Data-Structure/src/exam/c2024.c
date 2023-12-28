#include <stdio.h>
#include <stdlib.h>

#define MAXV 100

// 图的定义
typedef struct
{
    int numVertices, numEdges; // 图中实际的顶点数和边数
    char VerticesList[MAXV];   // 顶点表
    int Edge[MAXV][MAXV];      // 邻接矩阵
} MGraph;

// 入度数组
int inDegree[MAXV];

// 初始化图
void initGraph(MGraph *graph, int vertices, int edges, char verticesList[])
{
    graph->numVertices = vertices;
    graph->numEdges = edges;

    // 初始化顶点表
    for (int i = 0; i < vertices; ++i)
    {
        graph->VerticesList[i] = verticesList[i];
        inDegree[i] = 0;
    }

    // 初始化邻接矩阵
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            graph->Edge[i][j] = 0;
        }
    }
}

// 添加有向边
void addDirectedEdge(MGraph *graph, int src, int dest)
{
    graph->Edge[src][dest] = 1;
    inDegree[dest]++;
}

// DFS函数
void dfs(MGraph *graph, int node, int *visited, int *isUnique)
{
    visited[node] = 1;

    for (int i = 0; i < graph->numVertices; ++i)
    {
        if (graph->Edge[node][i] == 1)
        {
            inDegree[i]--;
            if (inDegree[i] == 0 && !visited[i])
            {
                dfs(graph, i, visited, isUnique);
            }
            else if (inDegree[i] < 0)
            {
                *isUnique = 0;
            }
        }
    }
}

// 判断图是否有唯一拓扑排序
int hasUniqueTopologicalSort(MGraph *graph)
{
    int visited[MAXV] = {0};
    int isUnique = 1;

    // 找到入度为0的起始结点
    for (int i = 0; i < graph->numVertices; ++i)
    {
        if (inDegree[i] == 0 && !visited[i])
        {
            dfs(graph, i, visited, &isUnique);
        }
    }

    // 检查是否所有结点都被访问到
    for (int i = 0; i < graph->numVertices; ++i)
    {
        if (!visited[i])
        {
            return 0;
        }
    }

    return isUnique;
}

int main()
{
    MGraph graph;
    char verticesList[MAXV] = {'A', 'B', 'C', 'D', 'E'};
    int vertices = 5;
    int edges = 7;

    // 创建有向图
    initGraph(&graph, vertices, edges, verticesList);
    addDirectedEdge(&graph, 0, 1);
    addDirectedEdge(&graph, 0, 2);
    addDirectedEdge(&graph, 1, 3);
    addDirectedEdge(&graph, 2, 3);
    addDirectedEdge(&graph, 3, 4);
    addDirectedEdge(&graph, 2, 4);
    addDirectedEdge(&graph, 4, 1);

    // 判断是否有唯一拓扑排序
    int result = hasUniqueTopologicalSort(&graph);

    // 输出结果
    if (result)
    {
        printf("The graph has a unique topological sort.\n");
    }
    else
    {
        printf("The graph does not have a unique topological sort.\n");
    }

    return 0;
}
