#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char a[],int len)
{
    char b[20];
    int i,k;
    for(i=len-1,k=0;i>=0;i--)
    {
        b[k++]=a[i];
        }
        b[k]='\0';
    printf("reverse string is\n");
   printf("%s",b);
}
void main()
{
    system("CLS");
    char a[100],n;
    printf("enter a string\n");
    gets(a);
    n=strlen(a);
    rev(a,n);
    getch();
}
