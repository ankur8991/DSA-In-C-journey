#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node*next;
 };
 void linkedlisttraversal(struct node*ptr)
 {
    while(ptr!=NULL)
    {
        printf("Element: is %d\n",ptr->data);
        ptr=ptr->next;
    }
 }
 struct node*insertatend(struct node*n1, int data)
 {
    struct node*newn=(struct node*)malloc(sizeof(struct node));
            newn->data=data;
             struct node*p=n1;
         while(p->next!=NULL)
         {
           p=p->next;
         }
       
        p->next=newn;
        newn->next=NULL;
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
    n4->data=378;
    n4->next=NULL;

    printf("Before insert at end:\n");
    linkedlisttraversal(n1);
    printf("After insert at end the result is:\n");
    n1=insertatend(n1,66);
    linkedlisttraversal(n1);
 }