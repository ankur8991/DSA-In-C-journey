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
int isBST(struct node*root)
{
    static struct node*prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;//false returns.
        }
    
        if(prev!=NULL && root->data<=prev->data)  //ye condition right subtree ki h pr ye left keliye h false h isliye.
        {
            return 0;
        }
       prev=root;
       return isBST(root->right);

    }
    else{
        return 1;
    }

    }
 struct node*search(struct node*root,int key)
 {
    if(root==NULL)
    {
        return NULL;
    }
    if(key==root->data)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
 }


struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

int main()
{

   struct node*p=createnode(5);
   struct node*p1=createnode(3);
   struct node*p2=createnode(6);
   struct node*p3=createnode(1);
   struct node*p4=createnode(4);

   //linking the root node with left and right children.
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
   // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  


   struct node*s=search(p,1);   //s=sotred return value of funcation search.
   if(s!=NULL)
   {
    printf("Found :%d",s->data);
   }
   else
   {
     printf("Element is not found");
   }

   struct node*n=searchIter(p,6);   //s=sotred return value of funcation search.
   if(n!=NULL)
   {
    printf("Found :%d",n->data);
   }
   else
   {
     printf("Element is not found");
   }
    return 0;
}