#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void Bubble(int A[],int n)
{
 int i,j,flag=0;

 for(i=0;i<n-1;i++)
 {
 flag=0;
 for(j=0;j<n-i-1;j++)
 {
 if(A[j]>A[j+1])
 {
 swap(&A[j],&A[j+1]);
 flag=1;
 }
 }
 if(flag==0)
 break;
 }

}
int main()
{
 int A[10],n,i;
 printf("OMANSH DHAWAN CSE-B 202\n");
 printf("Enter the number of elements for sorting\n");
 scanf("%d",&n);
 printf("Enter the elements for sorting(BUBBLE SORT)\n");
 for(i=0;i<n;i++)
    scanf("%d",&A[i]);

 Bubble(A,n);
 printf("Sorted elements are:\n");
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 return 0;
}
