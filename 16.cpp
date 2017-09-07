#include<iostream>
using namespace std;
main(){
int a,b,c;
cout<<"Enter side 1=";
cin>>a;
cout<<"Enter side 2=";
cin>>b;
cout<<"Enter side 3=";
cin>>c;
if(a==b==c){
cout<<"Equilateral triangle";
}else if(a==b || b==c || a==c){
cout<<"Isoscles triangle";
}else{
cout<<"Scalene traingle";
}
}
