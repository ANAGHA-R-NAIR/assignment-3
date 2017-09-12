#include<iostream>
using namespace std;
main(){
int a,b,c,d;
cout<<"Enter cost price=";
cin>>a;
cout<<"Enter selling price=";
cin>>b;
c=a-b;
d=b-a;
if(c<0){
cout<<"Profit="<<d<<endl;
}else if(c>0){
cout<<"Loss="<<c<<endl;
}else{
cout<<"No profit no loss"<<endl;
}
return 0;
}
