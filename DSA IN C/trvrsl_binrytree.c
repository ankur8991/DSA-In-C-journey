#include<stdio.h>
#include<malloc.h>


struct node
{
 int data;
struct node*left;
struct node*right; 
};

struct node*createnode(int data)
{
    struct node*n; 
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preOrder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);  //recursively call in funcation.
        preOrder(root->right); //recursively call in funcation.
    }
}
void postOrder(struct node*root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void inOrder(struct node*root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int main()
{

   struct node*p=createnode(4);
   struct node*p1=createnode(1);
   struct node*p2=createnode(6);
   struct node*p3=createnode(5);
   struct node*p4=createnode(2);

   //linking the root node with left and right children.
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2 
   preOrder(p);
   printf("\n");
   postOrder(p);
   printf("\n");
   inOrder(p);
    return 0;
}