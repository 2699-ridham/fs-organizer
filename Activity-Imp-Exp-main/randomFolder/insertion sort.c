#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void Insertion(int A[],int n)
{
 int i,j,x;

 for(i=1;i<n;i++)
 {
 j=i-1;
 x=A[i];
 while(j>-1 && A[j]>x)
 {
 A[j+1]=A[j];
 j--;
 }
 A[j+1]=x;
 }
}
int main()
{
 int A[10],n,i;
 printf("OMANSH DHAWAN CSE-B 202\n");
 printf("Enter the number of elements for sorting\n");
 scanf("%d",&n);
 printf("Enter the elements for sorting(INSERTION SORT)\n");
 for(i=0;i<n;i++)
    scanf("%d",&A[i]);

 printf("Sorted elements are:\n");
 Insertion(A,n);

 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 return
0
;
}
