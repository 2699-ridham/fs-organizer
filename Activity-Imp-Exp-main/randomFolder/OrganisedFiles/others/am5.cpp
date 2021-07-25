#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;

float func(float x)
{
	return pow(x,0.5)*exp(-x);
}

float simpsons_(float ll, float ul, int n)
{

	float h = (ul - ll) / n;

	float x[10], fx[10];

	for (int i = 0; i <= n; i++) {
		x[i] = ll + i * h;
		fx[i] = func(x[i]);
	}

	float res = 0;
	for (int i = 0; i <= n; i++) {
		if (i == 0 || i == n)
			res += fx[i];
		else if (i % 2 != 0)
			res += 4 * fx[i];
		else
			res += 2 * fx[i];
	}
	res = res * (h / 3);
	return res;
}

int main()
{
	float lower_limit,upper_limit;
	int n;
	system("cls");
	cout<<"Omansh Dhawan CSE-B 202"<<endl;
	cout<<"Enter the lower limit"<<endl;
	cin>>lower_limit;
	cout<<"Enter the upper limit"<<endl;
	cin>>upper_limit;
	cout<<"Enter the number of sub intervals"<<endl;
	cin>>n;
	cout <<"The value of the integral is = "<<simpsons_(lower_limit, upper_limit, n);
	getch();
	return 0;
}
