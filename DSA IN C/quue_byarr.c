#include <stdio.h>
#include <stdlib.h>
struct queue
{
  int size;
  int f;
  int r;
  int *arr;
};
int isFull(struct queue *q)
{
  if (q->r == q->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int isEmpty(struct queue *q)
{
  if (q->r == q->f)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void enqueue(struct queue *q, int val)
{
  if (isFull(q))
  {
    printf("this queue is full\n");
  }
  else
  {
    q->r++;
    q->arr[q->r] = val;
    printf("enqueued element: %d\n", val);
  }
}

int dequeue(struct queue *q)
{
  int a = -1;
  if (isEmpty(q))
  {
    printf("this queue is Empty\n");
  }
  else
  {
    q->f++;
    a = q->arr[q->f];
  }
  return a;
}
int main()
{
  struct queue q;
  q.size = 5;
  q.f = q.r = -1;
  q.arr = (int *)malloc(q.size*sizeof(int));
  enqueue(&q, 22);
  enqueue(&q, 44);
  enqueue(&q, 55);
  enqueue(&q, 66);
  enqueue(&q, 77);

  printf("dequeueing element %d\n", dequeue(&q));
  printf("dequeueing element %d\n", dequeue(&q));
  printf("dequeueing element %d\n", dequeue(&q));
  printf("dequeueing element %d\n", dequeue(&q));
  printf("dequeueing element %d\n", dequeue(&q));

  
  if(isEmpty(&q))
  {
    printf("Queue is Empty\n");
  }
   if(isFull(&q))
  {
    printf("Queue is Full\n");
  }
  return 0;
}