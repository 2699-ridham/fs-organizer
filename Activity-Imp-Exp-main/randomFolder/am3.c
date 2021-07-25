#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x*x -3*x -5;
}
float df (float x)
{
    return 3*x*x -3;
}
void main()
{
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("OMANSH DHAWAN CSE-B 202");
    printf("\nEnter x0, allowed error and maximum iterations\n");
    scanf("%f %f %d", &x0, &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf(" Root = %9.6f\n", x1);
        if (fabs(h) < allerr)
        {
            printf("After %3d iterations, root = %8.6f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }

    return 1;
}
