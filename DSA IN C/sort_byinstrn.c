#include<stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",A[i]);
    }
   printf("\n"); 
}

void insertionsort(int *A, int n)
{
    int key,j;
    for (int i = 0; i < n; i++)
    {
        key=A[i];
        j=i-1;
        //loop for each passes
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;  //--> that special for when i=-1; then A[i]=key put in first postion.
    }
    
}

int main()
{
    int n;
   int A[]={22,44,6,7,5};
    n=5;
    printArray(A,n);
    insertionsort(A,n);
    printArray(A,n);
    return 0;
}