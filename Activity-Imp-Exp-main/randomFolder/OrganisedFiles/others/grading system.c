#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n;
    printf("enter marks\n");
    scanf("%d",&n);
    if(n>90)
        printf("excellent");
    else if(n<=90&&n>80)
        printf("good");
    else if(n<=80&&n>70)
            printf("fair");
    else if(n<=70&&n>60)
        printf("meets expectations");
    else
        printf("below par");
    getch();
}
