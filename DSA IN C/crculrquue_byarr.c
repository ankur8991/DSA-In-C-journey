#include<stdio.h>
#include<stdlib.h>
struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularqueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularqueue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q, int val)
{
    if(isFull(q))
    {
        printf("This Queue is full");
    }
    else
    {
       q->r=(q->r+1)%q->size;
       q->arr[q->r]=val;
       printf("Enqueued Element: %d\n", val);
    }
}
int dequeue(struct circularqueue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("This Queue is empty");
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
    struct circularqueue q;
    q.size=5;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));
    
    enqueue(&q,15);
    enqueue(&q,66);
    enqueue(&q,15);
    enqueue(&q,15);//isme hm size se ek element km hi dalengai kyuki hmne ek 0 index ke liye resreve kr diya h.
    
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    
    enqueue(&q,55);


    return 0;
}