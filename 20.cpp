#include<iostream>
using namespace std;
main(){
float a,b,c,d;
cout<<"Enter basic salary=";
cin>>a;
if(a<=10000){
b=0.2*a;
c=0.8*a;
}else if(a<=20000 && a>10000){
b=0.25*a;
c=0.9*a;
}else if(a>20000){
b=0.3*a;
c=0.95*a;
}
d=a+b+c;
cout<<"Gross salary="<<d<<endl;
}
