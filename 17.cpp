#include<iostream>
#include<cmath>
using namespace std;
main(){
float a,b,c,d,e,f;
cout<<"Enter co-efficient of x^2=";
cin>>a;
cout<<"Enter co-efficient of x=";
cin>>b;
cout<<"Enter number=";
cin>>c;
d=sqrt((b*b)-(4*a*c));
e=(-b+d)/(2*a);
f=(-b-d)/(2*a);
cout<<"Roots of quadratic equation="<<e;
cout<<","<<f;
}
