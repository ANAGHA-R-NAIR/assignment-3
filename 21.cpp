#include<iostream>
using namespace std;
main(){
float a,b,c;
cout<<"Enter unit charges=";
cin>>a;
if(a<=50){
b=0.50*a;
}else if(a>50 && a<=150){
b=(0.50*50)+(0.75*(a-50));
}else if(a>150 && a<=250){
b=(0.50*50)+(0.75*100)+(1.20*(a-150));
}else if(a>250 ){
b=(0.50*50)+(0.75*100)+(1.20*100)+(1.50*(a-250));
}
c=1.2*b;
cout<<"Total electricity bill="<<c<<endl;
}
