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
 struct node*insertatindex(struct node*n1,int data,int index)
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

    linkedlisttraversal(n1);
    printf("After insert at btwn the result is\n");
    n1=insertatindex(n1,77,3);
    linkedlisttraversal(n1);
 }