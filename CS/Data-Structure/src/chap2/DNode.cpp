typedef int ElemType;

typedef struct DNode
{
    ElemType data;
    struct DNode *prior, *next;
} DNode, *DLinklist;

int main()
{
    DNode *s, *p, *q;
    
    // snippet of insert
    s->next = p->next;
    p->next->prior = s;
    s->prior = p;
    p->next = s;

    // snippet of delete
    p->next = q->next;
    q->next->prior = p;
    // free(q);
    return 0;
}