#include <stdio.h>
void printArray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}
void Bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // for no. of passes.
    {
        printf("working on pass number %d\n", i + 1);
        for (int j = 0; j < n-1-i; j++) // for no. of comperission in each pass.
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
void AdaptiveBubblesort(int *A, int n)
{
    int temp;
    int isSorted = 0;
     for (int i = 0; i < n - 1; i++)
    {
        printf("working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n -1-i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int A[] = {29, 24, 78,9, 95, 18, 5};
    int n = 7;
    printArray(A, n); // printing before sort array element.
    Bubblesort(A, n); // funcation of bubble sort.
    printArray(A, n); // printing after sort array element.
    
    return 0;
}