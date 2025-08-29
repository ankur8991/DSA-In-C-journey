
#include <stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *p)
{
    if(p->top==-1)
    {
     return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *p)
{
    if(p->top==p->size-1)
    {
     return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *p, int val)
{
    if(isFull(p))
    {
        printf("stack is overflow! cannot push %d to the stack\n",val);
    }
    else{
        p->top++;
        p->arr[p->top]=val;
    }
}
int pop(struct stack *p)
{
    if(isEmpty(p))
    {
        printf("stack is underflow! cannot pop  to the stack\n");
    }
    else{
      int val=p->arr[p->top];
      p->top--;
      return val;
    }
}


int main() {
    struct stack*sp;
    sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
     
    printf("Before pushing Empty: %d\n",isEmpty(sp));
    printf("Before pushing Full:%d\n",isFull(sp));
    push(sp,89);
    push(sp,67);
    push(sp,77);
    push(sp,33);
    push(sp,45);  
    push(sp,58);  //stack overflow becoz the size of arr/stack is 5.
    printf("After pushing Empty:%d\n",isEmpty(sp));
    printf("After pushing Full:%d\n",isFull(sp));

    printf("popped %d from the stack\n",pop(sp));
    printf("popped %d from the stack\n",pop(sp));
    printf("popped %d from the stack\n",pop(sp));
    printf("popped %d from the stack\n",pop(sp));
    
    return 0;
}