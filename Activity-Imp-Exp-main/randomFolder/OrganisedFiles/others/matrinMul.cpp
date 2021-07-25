#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
int i,j,a[10][10],b[10][10],c[10][10],row1,row2,col1,col2,k;
public:
void getdata();
void putdata();
void sum();
void multiply();
void transpose();
};
void matrix::getdata()
{
cout<<"Enter row size & column size of the first matrix:";
cin>>row1>>col1;
cout<<"Enter the elements for"<<row1<<"*"<<col1<<"matrix:";
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
cin>>a[i][j];
}}
cout<<"Enter the row size & column size of second matrix:";
cin>>row2>>col2;
if(col1==row2)
{
cout<<"Enter the elements for"<<row2<<"*"<<col2<<"matrix:";
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
cin>>b[i][j];
}}
}
else
cout<<"matrix algebra is not possible";
}
void matrix::multiply()
{
    cout<<"\nMultiplication of first and second matrix is : "<<endl;
for(i = 0; i < row1; ++i)
        for(j = 0; j < col2; ++j)
        {
            c[i][j]=0;
        }

    for(i = 0; i < row1; ++i)
        for(j = 0; j < col2; ++j)
            for(k = 0; k < col1; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            }

void matrix::putdata()
{
for(i=0;i<row1;i++)
{
cout<<"\n";
for(j=0;j<col2;j++)
{
cout<<"\t"<<c[i][j];
}}}
int main()
{
system("cls");
cout<<"OMANSH DHAWAN CSE-B 202\n";
matrix obj;
obj.getdata();
obj.multiply();
obj.putdata();
return 0;
}
