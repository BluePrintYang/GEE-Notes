typedef int ElemType;
#define MaxSize 50
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode *next;
} LinkNode;

typedef struct
{
    LinkNode *front, *rear;
} *LinkQueue;

void InitQueue(LinkQueue &Q)
{
    // Q->front = Q->rear = (LinkNode*) malloc (sizeof(LinkNode));
    Q->front->next = nullptr;
}

bool isEmpty(LinkQueue Q)
{
    if (Q->rear == Q->front)
        return true;
    else
        return false;
}

bool EnQueue(LinkQueue &Q, ElemType x)
{
    // LinkNode *s = (LinkNode *) malloc (sizeof(LinkNode));

    // Q.data[Q.rear] = x;
    // Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(LinkQueue &Q, ElemType &x)
{
    // if (Q.rear == Q.front)
    // {
    //     return false;
    // }
    // x = Q.data[Q.front];
    // Q.front = (Q.front + 1) % MaxSize;
    return true;
}

int main()
{
    return 0;
}