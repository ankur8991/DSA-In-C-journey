#include<stdio.h>

void printArray(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf(" %d ",A[i]);
  }
  printf("\n");
}
 void selectionsort(int *A, int n)
 {
    int indexOfMin,temp;
    printf("Running Selection sort.....\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin=i;
        for (int j = 1+i; j < n; j++)
        {
            if(A[j]< A[indexOfMin])
            {
             indexOfMin=j;
            }
        }
      temp=A[i];
      A[i]=A[indexOfMin];
      A[indexOfMin]=temp;  
    }
    
 }


int main()
{    
    int n=5;
    int A[]={22,44,3,2,77};
     
    printArray(A,n);

    selectionsort(A,n);

    printArray(A,n);
    return 0;
}
