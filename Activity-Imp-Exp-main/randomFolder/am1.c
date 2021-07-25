#include<stdio.h>
#include<conio.h>

double func(double x)
{
    return x*x*x + 2*x - 2;
}


void regularFalsi(double a,double b,int n)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }

    double c = 0;

    for(int i=0;i<n;i++)
    {
        c = (a*func(b) - b*func(a)) / (func(b) - func(a));
        if (func(c) == 0.0){
            printf("Root = %lf\n",c);
            break;
        }
        else if (func(c)*func(a) < 0){
                printf("Root = %lf\n",c);
                b = c;
        }
        else{
                printf("Root = %lf\n",c);
                a = c;
        }
    }
}
void  main()
{   int a,b,n;
    system("cls");
    printf("OMANSH DHAWAN CSE-B 202\n");
    printf("Enter the initial root interval\n");
    scanf("%d %d",&a,&b);

    printf("Ener the number of iterations\n");
    scanf("%d",&n);

    regularFalsi(a,b,n);


    getch();
}
