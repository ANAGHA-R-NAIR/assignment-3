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
if(a+b>c && a+c>b && b+c>a){
cout<<"Triangle is valid";
}else{
cout<<"Triangle is not valid";
}
}
