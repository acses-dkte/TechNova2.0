#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *createLinkedList(int arr[], int size)
{
    if (size == 0)
        return NULL;

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;

    struct Node *current = head;
    for (int i = 1; i < size; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }

    return head;
}
void reverseLinkedList(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    struct Node *head = createLinkedList(arr, size);

    reverseLinkedList(&head);
    // print reversed linkedlist
    printList(head);

    return 0;
}