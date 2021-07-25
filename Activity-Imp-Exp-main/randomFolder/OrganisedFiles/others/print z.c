#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {   if(i>0&&i<4)
        {   if(j==4-i)
              printf("*");
              else
                printf(" ");
        }
        else
            printf("*");
        }
        printf("\n");
    }
    getch();

}
