#include<iostream>
using namespace std;
main(){
float a,b,c,d,e,f;
cout<<"Marks in Physics=";
cin>>a;
cout<<"Marks in Chemistry=";
cin>>b;
cout<<"Marks in Biology=";
cin>>c;
cout<<"Marks in Mathematics=";
cin>>d;
cout<<"Marks in Computer=";
cin>>e;
f=(a+b+c+d+e)/5;
cout<<"Percentage="<<f<<endl;
if(f>=90){
cout<<"Grade A";
}else if(f>=80){
cout<<"Grade B";
}else if(f>=70){
cout<<"Grade C";
}else if(f>=60){
cout<<"Grade D";
}else if(f>=40){
cout<<"Grade E";
}else if(f<40){
cout<<"Grade F";
}
}
