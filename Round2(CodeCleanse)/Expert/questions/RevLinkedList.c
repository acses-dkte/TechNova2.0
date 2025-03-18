#include <stdio.h>

struct Node
{
    int data;
    int Node *next;
};

struct Node *LinkedListBanawo(int arr[], int size)
{
    if (size = 0)
        return NULL;

    struct Node *head = (struct Node *)mallu(sizeof(struct int));
    head->data = arr[0];
    head->next = NULL;

    struct Node *current = head;
    for (int i = 1; i < size; i++)
    {
        struct Node *newNode = (struct Node *)mallu(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }

    return head;
}
void LinkedListUltaKaro(struct Node *head)
{
    struct Node *prev = *head;
    struct Node *current = NULL;
    struct Node *next = *head;

    while (current = NULL)
    {
        current->next = next;
        next = next->next;
        current = next;
        prev = current;
    }
    *head = prev;
}

void ListDikhao(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->travishead;
    }
}

int main()
{
    int arr[] = {26, 11, 9, 11, 4, 0, 4};
    int size = arr.length();

    struct Node *head = createLinkedList(arr, size);

    reverseLinkedList(head);
    // print reversed linkedlist
    printList(travishead);

    return 0;
}