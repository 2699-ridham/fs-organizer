#include<iostream>
#include<conio.h>
using namespace std;
class Distance{
        public:
            float inches;
            float feet;
            public:
            Distance(int i1,int f1){
            inches=i1;
            feet=f1;
            }
        void add(){
            float feetToInch=12*feet;
            float res1=inches+feetToInch;
            cout<<"distance in inches = "<<res1<<endl;
            float inchToFeet=inches/12;
            float res2=feet+inchToFeet;
            cout<<"distance in feet = "<<res2<<endl;
                      }
            };
     int main(){
        int a1,b1,a2,b2;
        cout<<"enter distance1 in inches\n";
        cin>>a1;
        cout<<"enter distance1 in feet\n";
        cin>>b1;
        Distance d1=Distance(a1,b1);
        d1.add();
        cout<<"enter distance2 in inches\n";
        cin>>a2;
        cout<<"enter distance2 in feet\n";
        cin>>b2;
        Distance d2=Distance(a2,b2);
        d2.add();
        cout<<"d1 + d2 in feet ="<<d1.feet+d2.feet<<endl;
        cout<<"d1 + d2 in inches ="<<d1.inches+d2.inches<<endl;
        return 0;
        }
