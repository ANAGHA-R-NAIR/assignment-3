#include<iostream>
using namespace std;
main(){
char a;
cout<<"Enter an alphabet= ";
cin>>a;
if(a>='a' && a<='z'){
cout<<"Lower case";
}else if(a>='A' && a<='Z'){
cout<<"Upper case";
}else{
cout<<"Not an alphabet";
}
}
