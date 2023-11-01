#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} NODE;

typedef NODE *PNODE;

void func(PNODE h, int n)
{
    PNODE p = h, r;
    int *q, m;
    q = (int *)malloc(sizeof(int) * (n - 1));
    for (int i = 0; i < n + 1; i++)
    {
        *(q + i) = 0;
    }
    while (p->link != NULL)
    {
        m = p->link->data > 0 ? p->link->data : -p->link->data;
        if (*(q + m) == 0)
        {
            *(q + m) = 1;
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

void printList(PNODE h)
{
    PNODE p = h->link;
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}

void test1()
{
    PNODE head = (PNODE)malloc(sizeof(NODE));
    head->link = NULL; // Initialize an empty linked list

    // Create a linked list with duplicate values
    PNODE current = head;
    for (int i = 1; i <= 5; i++)
    {
        PNODE newNode = (PNODE)malloc(sizeof(NODE));
        newNode->data = i;
        newNode->link = NULL;
        current->link = newNode;
        current = newNode;

        // Add a duplicate node
        newNode = (PNODE)malloc(sizeof(NODE));
        newNode->data = i;
        newNode->link = NULL;
        current->link = newNode;
        current = newNode;
    }

    printf("Original linked list:\n");
    printList(head);

    // Call the func function to remove duplicates
    func(head, 10);

    printf("Linked list after removing duplicates:\n");
    printList(head);

    // Free the memory allocated for the linked list
    while (head->link != NULL)
    {
        PNODE temp = head->link;
        head->link = temp->link;
        free(temp);
    }
    free(head);
}

void test2()
{
    PNODE head = (PNODE)malloc(sizeof(NODE));
    head->link = NULL; // Initialize an empty linked list

    // Create a linked list with duplicate values
    PNODE current = head;
    for (int i = 1; i <= 5; i++)
    {
        PNODE newNode = (PNODE)malloc(sizeof(NODE));
        newNode->data = i;
        newNode->link = NULL;
        current->link = newNode;
        current = newNode;

        // Add a duplicate node
        newNode = (PNODE)malloc(sizeof(NODE));
        newNode->data = i;
        newNode->link = NULL;
        current->link = newNode;
        current = newNode;
    }

    // Add nodes with equal absolute values
    PNODE newNode = (PNODE)malloc(sizeof(NODE));
    newNode->data = -3;
    newNode->link = NULL;
    current->link = newNode;
    current = newNode;

    newNode = (PNODE)malloc(sizeof(NODE));
    newNode->data = -5;
    newNode->link = NULL;
    current->link = newNode;
    current = newNode;

    printf("Original linked list:\n");
    printList(head);

    // Call the func function to remove duplicates
    func(head, 11);

    printf("Linked list after removing duplicates and equal absolute values:\n");
    printList(head);

    // Free the memory allocated for the linked list
    while (head->link != NULL)
    {
        PNODE temp = head->link;
        head->link = temp->link;
        free(temp);
    }
    free(head);
}

int main()
{
    test2();
    return 0;
}