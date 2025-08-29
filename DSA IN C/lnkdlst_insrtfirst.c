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
 struct node*insertatfirst(struct node*n1,int data)
 {
    struct node*newn=(struct node*)malloc(sizeof(struct node));
    newn->next=n1;
    newn->data=data;
    return newn;
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
    printf(" after insert at first\n ");
    n1=insertatfirst(n1,87);
    linkedlisttraversal(n1);
 }