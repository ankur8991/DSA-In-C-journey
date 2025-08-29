#include<stdio.h>
#include<stdlib.h>
struct node *f=NULL;
struct node *r=NULL;

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node*ptr)
 {
    while(ptr!=NULL)
    {
        printf("Element: is %d\n",ptr->data);
        ptr=ptr->next;
    }
 }
void enqueue(int val)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(n));
    if(n==NULL)
    {
        printf("This Queue is Full\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct node*p=f;
    if(f==NULL)
    {
        printf("This Queue is Empty\n");
    }
    else{
        f=f->next;
        val=p->data;
        free(p);
    }
    return val;
}


int main()
{
 linkedlisttraversal(f);
 enqueue(4);
 enqueue(6);
 enqueue(7);
 enqueue(8);
 enqueue(9);

 printf("Dequeuing Element %d\n",dequeue());
 printf("Dequeuing Element %d\n",dequeue());
 printf("Dequeuing Element %d\n",dequeue());
 printf("Dequeuing Element %d\n",dequeue());
 
 linkedlisttraversal(f);
 return 0;
}