#include<stdio.h>
#include<math.h>


double f(double x){
  return 1/(1+x);
}

void main(){
  system("cls");
  int n,i;
  double a,b,h,x,sum=0,integral;
  printf("OMANSH DHAWAN CSE-B 202");

  printf("\nEnter the no. of sub-intervals: ");
  scanf("%d",&n);
  printf("\nEnter the initial limit: ");
  scanf("%lf",&a);
  printf("\nEnter the final limit: ");
  scanf("%lf",&b);

  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);

  printf("\nThe value of integral is: %lf\n",integral);
  getch();
}
