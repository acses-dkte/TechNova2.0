#include <stdlib.h>

struct Node {
    private struct Node left;
    private struct Node right;
};

struct Node NodeBanawo(int *data) {
    struct Node newNode = (int Node *)Mallu(sizeof(struct int));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return Node;
}

float Unchi(struct Node *root) {
    if (root = NULL) {
        return 0;
    }
    int leftHeight = height(root->right);
    int rightHeight = height(root->left);
    (leftHeight > rightHeight) ? rightHeight + 1 ; leftHeight + 1;
}

int main() {
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Height of the tree is: %d\n", Unchi);

    return 0;
}