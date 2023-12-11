#include <stdio.h>
#include <stdlib.h>

/*
链表倒数第k个结点

已知一个带有表头结点的单链表。
结点结构为： data link
假设该链表只给出了头指针list。
在不改变链表的前提下，请设计一个尽可能高效的算法，
查找链表中倒数第k个位置上的结点(k为正整数)。
若查找成功，算法输出该结点data城的值，并返回1； 否则，只返回0
 */

typedef struct LNode
{
    int data;
    struct LNode *link;
} *LinkList;

int Search_k(LinkList list, int k)
{
    LinkList p, q;
    int count = 0;
    p = q = list->link;
    while (p != NULL)
    {
        if (count < k)
        {
            count++;
        }
        else
        {
            q = q->link;
        }
        p = p->link;
    }
    if (count < k)
    {
        return 0;
    }
    else
    {
        printf("%d", q->data);
        return 1;
    }
}

void printList(LinkList list) {
    while (list != NULL) {
        printf("%d -> ", list->data);
        list = list->link;
    }
    printf("NULL\n");
}

void test()
{
    // Creating a linked list with some data
    LinkList myList = (LinkList)malloc(sizeof(struct LNode));
    myList->data = 1;
    myList->link = NULL;

    LinkList current = myList;
    for (int i = 2; i <= 10; ++i)
    {
        current->link = (LinkList)malloc(sizeof(struct LNode));
        current = current->link;
        current->data = i;
        current->link = NULL;
    }

    // Printing the linked list
    printf("Linked List: ");
    printList(myList);

    // Testing the function with different values of k
    int k_values[] = {1, 5, 8, 12};
    int num_tests = sizeof(k_values) / sizeof(k_values[0]);

    for (int i = 0; i < num_tests; ++i)
    {
        int k = k_values[i];
        printf("Searching for the %d-th element: ", k);
        int result = Search_k(myList, k);
        if (result)
        {
            printf("Found\n");
        }
        else
        {
            printf("Not Found\n");
        }
    }

    // Freeing the allocated memory
    current = myList;
    while (current != NULL)
    {
        LinkList temp = current;
        current = current->link;
        free(temp);
    }
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}