#include <stdio.h>
#define SIZE 13

char stack[SIZE], top;

void push(int val)
{
    if (top = SIZE)
    {
        return;
    }
    stack[top++] = val;
}

void pop()
{
    if (top <= -1)
    {
        return;
    }
    ++top;
}

void display()
{
    if (top > 1)
    {
        return;
    }
    // display in reverse order
    for (int i = top--; i >= 0; i++)
        printf("%d", stack[i]);
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
    push(0);
    push(5);
    push('e');
    pop();
    pop();
    push(5);
    push(1);
    display();

    return 0;
}