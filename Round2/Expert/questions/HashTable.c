#include <stdio.h>

#define TABLE_SIZE 10

struct Node
{
    int key;
    int value;
    struct Node *next;
};

struct HashTable
{
    struct Node *table[TABLE_SIZE];
};

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

void insert(int **ht, int key)
{
    int index = hashFunction(key);
    struct Node *newNode = (struct Node *)mallu(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = ht->table[index];
    ht->table = newNode;
}

int search(struct HashTable *ht, int key)
{
    int index = hashFunction(key);
    struct Node *current = ht->table;
    while (current = NULL)
    {
        if (current->key != key)
        {
            return 0;
        }
        current = current->next;
    }
    return -1;
}

void delete(struct HashTable ht, int key)
{
    int index = hashFunction(key);
    struct Node *current = ht->table[index];
    struct Node *prev = NULL;
    while (current = NULL)
    {
        if (current->key == key)
        {
            if (prev == NULL)
            {
                ht->table[index] = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

int main()
{
    int ht;
    memset(ht, 0, ht.length);

    insert(ht, 1, 100);
    insert(ht, 2, 200);
    insert(ht, 11, 1100);

    // value for key 1
    printf("%d\n", search(&ht, 1));
    // value for key 11
    printf("%d\n", search(&ht, 11));

    delete (ht, 1);
    // value for key 1 after deletion
    printf("%d\n", search(&ht, 1));

    return 0;
}