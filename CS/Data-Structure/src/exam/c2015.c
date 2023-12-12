#include <stdio.h>
#include <stdlib.h>
/*
删除绝对值相等的重复结点

现要求设计一个时间复杂度尽可能高效的算法,
对于链表中data的绝对值相等的结点,
仅保留第一次出现的结点而删除其余绝对值相等的结点。
 */

typedef struct node
{
    int data;
    struct node *link;
} Node, *PNODE;

void DeleteNode(PNODE head, int n)
{
    int *a;
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    if (head == NULL)
    {
        return;
    }
    PNODE pre = head, cur = pre->link;
    a[abs(pre->data) - 1] = 1;
    while (cur != NULL)
    {
        int data = abs(cur->data);
        while (a[data - 1] == 1)
        {
            // cur = cur->link;
            // data = cur->data > 0 ? cur->data : -cur->data;
            PNODE temp = cur;
            cur = cur->link;
            free(temp);
            if (cur == NULL)
            {
                break;
            }
            data = abs(cur->data);
        }
        if (cur != NULL)
        {
            a[data - 1] = 1;
            pre->link = cur;
            pre = cur;
            cur = cur->link;
        }
    }
}

void func(PNODE h, int n)
{
    PNODE p = h, r;
    int *q, m;
    q = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n + 1; i++)
    {
        *(q + i) = 0;
    }
    while (p->link != NULL)
    {
        m = p->link->data > 0 ? p->link->data : -p->link->data;
        if (q[m] == 0)
        {
            q[m] = 1;
            p = p->link;
        }
        else
        {
            r = p->link;
            p->link = r->link;
            free(r);
        }
    }
    free(q);
}

void displayList(PNODE head)
{
    PNODE current = head->link;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->link;
    }
    printf("NULL\n");
}

void freeList(PNODE head)
{
    PNODE current = head->link;
    while (current != NULL)
    {
        PNODE temp = current;
        current = current->link;
        free(temp);
    }
    free(head);
}

void test()
{
    // Create a linked list for testing
    PNODE head = (PNODE)malloc(sizeof(Node));
    head->link = NULL;

    // Insert elements into the linked list
    for (int i = 1; i <= 10; i++)
    {
        PNODE newNode = (PNODE)malloc(sizeof(Node));
        newNode->data = i % 3;
        if (i < 5)
        {
            newNode->data = -(i % 3);
        }
        newNode->link = head->link;
        head->link = newNode;
    }

    for (int i = 0; i < 3; i++)
    {
        PNODE newNode = (PNODE)malloc(sizeof(Node));
        newNode->data = 4;
        newNode->link = head->link;
        head->link = newNode;
    }
    

    // Display the original linked list
    printf("Original Linked List: ");
    displayList(head);

    // Call the func function
    func(head, 5);
    // DeleteNode(head, 5);

    // Display the modified linked list
    printf("Modified Linked List: ");
    displayList(head);

    // Free the memory allocated for the linked list
    freeList(head);
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}