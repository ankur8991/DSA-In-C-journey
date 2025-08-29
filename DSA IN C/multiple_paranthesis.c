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
        printf("stack overflow! cannot push %d to the stack\n", val);
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
        printf("stack underflow! cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = p->arr[p->top];
        p->top--;
        return val;
    }
}

int Match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
}
int paranthsisisMatch(char *exp)
{
    struct stack *sp;
    sp->size = 155;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            popped_ch = pop(sp);
            if (!Match(popped_ch, exp[i]))
            {
                return 0;
            }
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
    char *exp = "(2-3){2##-4-34]}";

    if (paranthsisisMatch(exp))
    {
        printf("the paranthesis is balanced");
    }
    else
    {
        printf("the paranthesis is not balanced");
    }


    
    return 0;
}