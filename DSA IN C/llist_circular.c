#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node*next;
 };
 void linkedlisttraversal(struct node*n1)
 {
    struct node*ptr=n1;
    do
    {
         printf("Element: is %d\n",ptr->data);
        ptr=ptr->next;
    } while(ptr!=n1);
 }
 struct node*insertatfirst(struct node*n1,int data)
 {
    struct node*newn=(struct node*)malloc(sizeof(struct node));
    newn->data=data;
    struct node*p=n1->next;
    while(p->next!=n1)
    {
        p=p->next;
    }
    p->next=newn;
    newn->next=n1;
    n1=newn;
    return n1;
 }
 struct node*insertatbtwn(struct node*n1,int data,int index)
 {
      struct node*newn=(struct node*)malloc(sizeof(struct node));
    struct node*p=n1;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    newn->data=data;
    newn->next=p->next;
    p->next=newn;
    return n1;

 }
 struct node*insertatend(struct node*n1,int data)
 {
       struct node*newn=(struct node*)malloc(sizeof(struct node));
            newn->data=data;
             struct node*p=n1;
         while(p->next!=n1)
         {
           p=p->next;
         }
       
        p->next=newn;
        newn->next=n1;
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
    
    n1->data=34;
    n1->next=n2;
    n2->data=53;
    n2->next=n3;
    n3->data=65;
    n3->next=n4;
    n4->data=37;
    n4->next=n1;

   // printf(" circular linkedlist before insertion\n");
   //printf(" circular linkedlist before insertion in btwn\n");
  // printf(" circular linkedlist before insertion at end\n");
    //linkedlisttraversal(n1);
    //n1=insertatfirst(n1,44);
   // n1=insertatbtwn(n1,66,3);
   //n1=insertatend(n1,44);
    // printf(" circular linkedlist after insertion in btwn\n");
    //printf("circular linkedlist after insertion\n");
    //printf(" circular linkedlist before insertion at end\n");
   // linkedlisttraversal(n1);
 }