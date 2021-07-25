#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define h 0.1
double f(double x,double y)
{
    return x - y*y;
      }
double ff(double x,double y)
{
    return 1 - 2*y*f(x,y);
}
double fff(double x, double y)
 {
      return -2*f(x,y)*f(x,y) - 2*y*ff(x,y);
  }
void taylor(double x,double y[])
{
    int i;
    double x1;
     cout << "i\t\tx\t\ty " << endl;
      for ( i=0;i<4;i++)
        {
            y[i+1]=y[i]+h*f(x,y[i] ) + (h*h/2)*ff(x,y[i]) + (pow(h,3)/6)*fff(x,y[i]) ;
      cout << i << "\t\t" << setprecision(1)<<fixed << x << "\t\t" <<  setprecision(5) << fixed << y[i] << endl;
      if(i==1)
        {
            x1=y[i];
        }
        x= x+ h;
        }
        cout << "\nThe value of y when x=0.1 is " << setprecision(5) <<fixed << x1 << endl;
    }
int main()
{
    double x0,y[100];
    cout<<"OMANSH DHAWAN CSE-B 202"<<endl;
    cout << "Enter x0 and y0 : ";
    cin >> x0 >> y[0];
    taylor(x0,y);
    return 0;
}
