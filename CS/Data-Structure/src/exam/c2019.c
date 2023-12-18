#include <stdio.h>
#include <stdlib.h>
/*
重排链表

设线性表 L=(a_1,a_2,a_3,...,a_{n-2},a_{n-1},a_n)
采用带头结点的单链表保存，链表中的结点定义如下：
typedef struct node
{
    int data;
    struct node *next;
} NODE;
请设计一个空间复杂度为 O(1)且时间上尽可能高效的算法，
重新排列 L 中的各结点，
得到线性表 L'=(a_1,a_n,a_2,a_{n-1},a_3,a_{n-2},...)
 */
typedef struct node
{
    int data;
    struct node *next;
} NODE;

void ReOrder(NODE *head, int n)
{
    int mid = n / 2;
    NODE *r = head;
    for (int i = 0; i < mid; i++)
    {
        r = r->next;
    }
    NODE *pre, *cur = r;
    while (cur != NULL)
    {
        NODE *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    NODE *fast = head, *slow = head;
    for (int i = 0; i < mid; i++)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        NODE *slowNext = slow->next;
        NODE *fastNext = fast->next;
        slow->next = fast;
        fast->next = slowNext;
        fast = fastNext;
        slow = slowNext;
    }
}

void ReOrder2(NODE *head, int n)
{
    if (head == NULL || n <= 0)
    {
        return;
    }

    // Find the middle of the linked list
    int mid = n / 2;
    NODE *r = head;
    for (int i = 0; i < mid; i++)
    {
        r = r->next;
    }

    // Reverse the second half of the linked list
    NODE *pre = NULL, *cur = r;
    while (cur != NULL)
    {
        NODE *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }

    // Merge the two halves of the linked list
    NODE *fast = head->next, *slow = pre;
    while (slow != NULL)
    {
        NODE *slowNext = slow->next;
        NODE *fastNext = fast->next;
        slow->next = fastNext;
        fast->next = slow;
        fast = fastNext;
        slow = slowNext;
    }
}

void change_list(NODE *h)
{
    NODE *p, *q, *r, *s;
    p = q = h;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        if (q->next != NULL)
        {
            q = q->next;
        }
    }
    q = p->next;
    p->next = NULL;
    while (q != NULL)
    {
        r = q->next;
        q->next = p->next;
        p->next = q;
        q = r;
    }
    printf("%d\n", p->data);
    printf("%d\n", p->next->data);
    s = h->next;
    q = p->next;
    p->next = NULL;
    while (q != NULL)
    {
        r = q->next;
        q->next = s->next;
        s->next = q;
        s = q->next;
        q = r;
    }
}

void displayList(NODE *head)
{
    NODE *current = head->next;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeList(NODE *head)
{
    NODE *current = head->next;
    while (current != NULL)
    {
        NODE *temp = current;
        current = current->next;
        free(temp);
    }
    free(head);
}

void test()
{
    // Create a linked list for testing
    NODE *head = (NODE *)malloc(sizeof(NODE));
    head->next = NULL;

    // Insert elements into the linked list
    for (int i = 1; i <= 6; i++)
    {
        NODE *newNode = (NODE *)malloc(sizeof(NODE));
        newNode->data = i;
        newNode->next = head->next;
        head->next = newNode;
    }

    // Display the original linked list
    printf("Original Linked List: ");
    displayList(head);

    // Call the change_list function
    change_list(head);
    // ReOrder2(head, 6);

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