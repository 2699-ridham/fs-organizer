#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void SelectionSort(int A[],int n)
{
 int i,j,k;

 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap(&A[i],&A[k]);
 }
}
int main()
{
 int A[10],n,i;
 printf("OMANSH DHAWAN CSE-B 202\n");
 printf("Enter the number of elements for sorting\n");
 scanf("%d",&n);
 printf("Enter the elements for sorting(SELECTION SORT)\n");
 for(i=0;i<n;i++)
    scanf("%d",&A[i]);

 printf("Sorted elements are:\n");
 SelectionSort(A,n);

 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 return 0;
}
