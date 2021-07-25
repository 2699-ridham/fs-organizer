#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int lsearch(int[],int,int);
void main()
{
 int arr[10];
 system("cls");
 int s,ch;
 printf("@OMANSH DHAWAN 202 CSE-B\n");
 printf("enter the number of elements in an array:\n");
 scanf("%d",&s);
 printf("enter %d elements in an array:\n",s);
 for(int i=0;i<s;i++)
 scanf("%d",&arr[i]);
     int n;
	 printf("enter the element to be found:");
	 scanf("%d",&n);
	 int a;
	 a=lsearch(arr,n,s);
	 if (a!=-1)
	 printf("element found at index %d\n",a);
	 else
	 printf("element not found\n");

 getch();
  }
 int lsearch(int arr[],int x,int s)
 {   for(int i=0;i<s;i++)
  {  if(arr[i]==x)
     return i; }
     return -1;
     }

