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

void test()
{
    int A[] = {-5, 3, 2, 10};
    printf("%d\n", (smallest(A, 4)));
    int A2[] = {1, 2, 3};
    printf("%d\n", (smallest(A2, 3)));
}

int main()
{
    // Invoking the test function
    test();

    return 0;
}