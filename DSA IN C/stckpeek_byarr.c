#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack*p)
{
    if(p->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack*p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *p , int val )
{
    if(isFull(p))
    {
        printf("stack is overflow! cannot push %d to the stack\n",val);
    }
    else
    {
      p->top++;
      p->arr[p->top]=val;
    }
}
int pop(struct stack *p)
{
    if(isEmpty(p))
    {
        printf("stack is underflow! cannot pop to the stack\n");
    }
    else
    {
       int val=p->arr[p->top];
       p->top--;
       return val;
    }
}
int peek(struct stack *sp,int i)
{
    int arryInd = sp->top -i + 1;
    if(arryInd < 0)
    {
        printf("Not a valid position for the stack\n");
    }
    else
    {
      return sp->arr[arryInd];
    }
}
int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}
int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=55;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    push(sp,44);
    push(sp,54);
    push(sp,67);
    push(sp,78);
    push(sp,45);
    push(sp,34);
    push(sp,33);
    push(sp,22);
    push(sp,66);
    push(sp,77);

    /*for(int j=1; j<=sp->top+1; j++)
    {
        printf("the value at position %d is %d\n",j,peek(sp,j));
    }*/
   // printf("the value in stack at Top is %d\n",stackTop(sp));   
  // printf("the value in stack at Bottom is %d\n",stackBottom(sp));


}