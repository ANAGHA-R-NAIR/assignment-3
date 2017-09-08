#include<iostream>
using namespace std;
main(){
int a,b,c,x;
cout<<"Enter first number= ";
cin>>a;
cout<<"Enter second number= ";
cin>>b;
cout<<"Enter third number= ";
cin>>c;
if(a<b){
x=b;
}else{
x=a;}
if( x<c){
cout<<"Maximum number is "<<c<<endl;
}else{
cout<<"Maximum number is"<<x<<endl;
}
return 0;
}
