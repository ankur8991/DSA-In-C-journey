
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *p, char val)
{
    if (isFull(p))
    {
        printf("stack is overflow! cannot push %d to the stack\n", val);
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
    }
}
char pop(struct stack *p)
{
    if (isEmpty(p))
    {
        printf("stack is underflow! cannot pop  to the stack\n");
    }
    else
    {
        char val = p->arr[p->top];
        p->top--;
        return val;
    }
}

int paranthesisMatch(char *exp)
{
    struct stack *sp;
    sp->size = 125;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] !='\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if(exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "(23)*455)";

    if (paranthesisMatch(exp))
    {
        printf("the parenthesis is matching\n");
    }
    else
    {
        printf("the parenthesis is not matching\n");
    }
    return 0;
}