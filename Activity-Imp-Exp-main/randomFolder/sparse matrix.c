#include <stdio.h>
#include <conio.h>
void main()
{
    printf("@OMANSH DHAWAN 202 CSE-B\n");
 int r=0,c=0;
printf("enter no. of rows:");
scanf("%d",&r);
printf("enter no. of columns:");
scanf("%d",&c);
int mat[r][c];
int spar[r][3];
if(r==c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("[%d],[%d] =",i,j);
                scanf("%d",&mat[i][j]);
            }
            else
              mat[i][j]=0;
        }
    }
    printf("\n matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n The sparse matrix");
    printf("\n Row column value: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]>0)
            {
                spar[i][0]=i;
                spar[i][1]=j;
                spar[i][2]=mat[i][j];
            }
        }
    }
    for(int i=0; i<r;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",spar[i][j]);
        }
        printf("\n");
    }
}
else
printf("Entered matrix is not a square matrix");
getch();
}






