typedef struct
{
    int value;
} ElemType;

int isEqual(ElemType a, ElemType b)
{
    return a.value == b.value;
}