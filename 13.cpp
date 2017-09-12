#include<iostream>
using namespace std;
main(){
int a,b,c,d,e,f,g,h;
cout<<"Enter amount=";
cin>>a;
b=a/2000;
cout<<"Number of 2000 notes="<<b<<endl;
c=(a%2000)/500;
cout<<"Number of 500 notes="<<c<<endl;
d=((a%2000)%500)/100;
cout<<"Number of 100 notes="<<d<<endl;
e=(((a%2000)%500)%100)/50;
cout<<"Number of 50 notes="<<e<<endl;
f=((((a%2000)%500)%100)%50)/20;
cout<<"Number of 20 notes="<<f<<endl;
g=(((((a%2000)%500)%100)%50)%20)/10;
cout<<"Number of 10 notes="<<g<<endl;
h=((((((a%2000)%500)%100)%50)%20)%10)/5;
cout<<"Number of 5 notes="<<h<<endl;
}
