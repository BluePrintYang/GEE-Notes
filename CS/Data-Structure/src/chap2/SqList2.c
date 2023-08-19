#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int ElemType;

// Define the list structure
typedef struct
{
    ElemType *data;
    int maxSize;
    int length;
} SqList;

// Initialize the list
void initList(SqList *list, int maxSize)
{
    list->data = (ElemType *)malloc(sizeof(ElemType) * maxSize);
    list->maxSize = maxSize;
    list->length = 0;
}

// Insert an element at a specific position
bool ListInsert(SqList *list, int position, ElemType element)
{
    if (position < 1 || position > list->length + 1 || list->length >= list->maxSize)
    {
        return false;
    }

    for (int i = list->length; i >= position; i--)
    {
        list->data[i] = list->data[i - 1];
    }

    list->data[position - 1] = element;
    list->length++;
    return true;
}

// Delete an element at a specific position
bool ListDelete(SqList *list, int position, ElemType *element)
{
    if (position < 1 || position > list->length)
    {
        return false;
    }

    *element = list->data[position - 1];

    for (int i = position; i < list->length; i++)
    {
        list->data[i - 1] = list->data[i];
    }

    list->length--;
    return true;
}

// Locate an element and return its position
int LocateElem(SqList *list, ElemType element)
{
    for (int i = 0; i < list->length; i++)
    {
        if (list->data[i] == element)
        {
            return i + 1; // 1-based index
        }
    }
    return 0; // Element not found
}

// Free memory used by the list
void freeList(SqList *list)
{
    free(list->data);
    list->maxSize = 0;
    list->length = 0;
}

void test()
{
    SqList mylist;
    int maxSize = 50;
    initList(&mylist, maxSize);

    ElemType element1 = {10};
    ElemType element2 = {20};
    ElemType element3 = {30};

    ListInsert(&mylist, 1, element1);
    ListInsert(&mylist, 2, element2);
    ListInsert(&mylist, 3, element3);

    printf("Inserted elements:\n");
    for (int i = 0; i < mylist.length; i++)
    {
        printf("%d ", mylist.data[i]);
    }
    printf("\n");

    ElemType searchElement = {20};
    int position = LocateElem(&mylist, searchElement);

    if (position != 0)
    {
        printf("Element found at position: %d\n", position);
    }
    else
    {
        printf("Element not found\n");
    }

    ElemType deletedElement;
    ListDelete(&mylist, 2, &deletedElement);
    printf("Deleted element: %d\n", deletedElement);

    int position2 = LocateElem(&mylist, searchElement);
    if (position2 != 0)
    {
        printf("Element found at position: %d\n", position);
    }
    else
    {
        printf("Element not found\n");
    }

    freeList(&mylist);
}

int main()
{
    test();
    return 0;
}
