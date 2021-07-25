#include<iostream>
using namespace std;

float func( float x)
{
	return (1 / ( 1 + x * x ));
}

float calculate(float lower_limit, float upper_limit,
				int interval_limit )
{
	float value;
	float interval_size = (upper_limit - lower_limit)
						/ interval_limit;
	float sum = func(lower_limit) + func(upper_limit);

	for (int i = 1 ; i < interval_limit ; i++)
	{
		if (i % 3 == 0)
			sum = sum + 2 * func(lower_limit + i * interval_size);
		else
			sum = sum + 3 * func(lower_limit + i * interval_size);
	}
	return ( 3 * interval_size / 8 ) * sum ;
}


int main()
{
	int sub_intervals;
	float lower_limit,upper_limit;
	cout<<"Omansh Dhawan CSE-B 202 Simpson's 3/8th Rule"<<endl;
	cout<<"\nEnter number of sub intervals = ";
	cin>>sub_intervals;
	cout<<"\nEnter the lower limit = ";
	cin>>lower_limit;
	cout<<"\nEnter the upper limit = ";
	cin>>upper_limit;
	float integral_res = calculate(lower_limit, upper_limit,sub_intervals);

	cout <<"Value of the Integral is = "<< integral_res;
	return 0;
}
