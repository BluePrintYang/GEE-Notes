#include <stdlib.h>
// #define MaxSize 50
#define InitSize 100
typedef int ElemType;

/* 
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


int main(int argc, char const *argv[])
{
    SqList L;
    // C 初始动态分配
    L.data = (ElemType *)malloc(sizeof(ElemType) * InitSize);
    return 0;
}
