#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node*next;
 };
 void linkdlisttraversal(struct node*ptr)
 {
    while(ptr!=NULL)
    {
        printf("Element: is %d\n",ptr->data);
        ptr=ptr->next;
    }
 }
 struct node*deleteatfirst(struct node*n1 )
 {
    struct node*p=n1;
    n1=n1->next;
    free(p);
    return n1;
 }
 struct node*deleteatindex(struct node*n1 , int index)
 {
    struct node*p=n1;
    struct node*q=n1->next;
    
    for(int i=0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return n1;
 }
 struct node*deleteatend(struct node*n1)
 {
    struct node*p=n1;
    struct node*q=n1->next;
    while(q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return n1;
 }
 int main()
 {
    struct node*n1;
    struct node*n2;
    struct node*n3;
    struct node*n4;

    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    n4=(struct node*)malloc(sizeof(struct node));

     n1->data=30;
     n1->next=n2;
     n2->data=55;
     n2->next=n3;
     n3->data=67;
     n3->next=n4;
     n4->data=25;
     n4->next=NULL;


    linkdlisttraversal(n1);
    //n1=deleteatfirst(n1);
    //printf("After DELETE\n");
   // printf("after delete at index the result is\n");
    //n1=deleteatindex(n1,2);
   // printf("After delete at end the result of linkedlist is\n ");
    //n1=deleteatend(n1);

    //linkdlisttraversal(n1);

 }