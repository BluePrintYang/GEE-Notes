#define InitSize 100
typedef int ElemType;

/*
#define MaxSize 50
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;
 */

typedef struct
{
    ElemType *data;
    int MaxSize, length;
} SqList;

#define MaxSize 50

bool ListInsert(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.length + 1)
    {
        return false;
    }
    if (L.length >= MaxSize)
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
    {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

int LocateElem(SqList L, ElemType e)
{
    int i;
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    SqList L;
    // C 初始动态分配
    // L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);

    // C++ 初始动态分配
    L.data = new ElemType[InitSize];
    return 0;
}
