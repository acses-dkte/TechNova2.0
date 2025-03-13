#include <stdio.h>
#define SIZE 13

char stack[SIZE];
int top = -1;

void push(int val)
{
    if (top == SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = val;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return;
    }
    top--;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("%c", stack[i]);
    printf("\n");
}
int main()
{
    // dont change sequence of these lines
    push('x');
    pop();
    push('a');
    push('g');
    push('e');
    pop();
    push('e');
    push('D');
    push('s');
    push('R');
    push('e');
    pop();
    push('0');
    push('5');
    push('e');
    pop();
    pop();
    push('5');
    push('1');
    display();

    return 0;
}