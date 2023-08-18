#include <ElemType.h>

typedef struct DNode
{
    ElemType data;
    struct DNode *prior, *next;
    
}DNode, *DLinklist;
