#include <stdio.h>
#include <stdlib.h>

/*
找出两个链表的公共后缀起始位置

假定采用带头结点的单链表保存单词，
当两个单词有相同的后缀时，则可共享相同的后缀存储空间，
例如，"loading"和"being"的存储映像如下图所示。
设str1和str2分别指向两个单词所在单链表的头结点，
链表结点结构为： data next
请设计一个时间上尽可能高效的算法，
找出由str1和str2所指向两个链表共同后缀的起始位置
 */

typedef struct Node
{
    char data;
    struct Node *next;
} SNode;

int listlen(SNode *head)
{
    int len = 0;
    while (head->next != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

SNode *findlist(SNode *str1, SNode *str2)
{
    int m, n;
    SNode *p, *q;
    m = listlen(str1);
    n = listlen(str2);
    for (p = str1; m > n; m--)
    {
        p = p->next;
    }
    for (q = str2; m < n; n--)
    {
        q = q->next;
    }
    while (p->next != NULL && p->next != q->next)
    {
        p = p->next;
        q = q->next;
    }
    return p->next;
}

// Function to print the linked list
void printList(SNode *head)
{
    while (head != NULL)
    {
        printf("%c -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to create a linked list node
SNode *createNode(char data)
{
    SNode *newNode = (SNode *)malloc(sizeof(SNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void test()
{
    // Test case for findlist function

    // Create linked list 1: A -> B -> C -> D -> E -> F
    SNode *list1 = createNode('A');
    list1->next = createNode('B');
    list1->next->next = createNode('C');
    list1->next->next->next = createNode('D');
    list1->next->next->next->next = createNode('E');
    list1->next->next->next->next->next = createNode('F');

    // Create linked list 2: X -> Y
    SNode *list2 = createNode('X');
    list2->next = createNode('Y');

    // Merge the linked lists at node C
    list2->next->next = list1->next->next;

    // Print the linked lists
    printf("Linked List 1: ");
    printList(list1);
    printf("Linked List 2: ");
    printList(list2);

    // Call the findlist function
    SNode *intersection = findlist(list1, list2);

    // Print the intersection point
    if (intersection != NULL)
    {
        printf("Intersection Point: %c\n", intersection->data);
    }
    else
    {
        printf("No intersection point found.\n");
    }

    // Free the allocated memory
    free(list1);
    free(list2);
}

int main()
{
    SNode s;
    s.data = '1';
    SNode *s1 = malloc(sizeof(struct Node));
    s1->data='s';
    printf("%c\n", s.data);
    printf("%c\n", s1->data);
    // Invoking the test function
    test();

    return 0;
}