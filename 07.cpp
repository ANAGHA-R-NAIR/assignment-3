#include<iostream>
using namespace std;
main() {
char a;
cout<<"Enter a character= ";
cin>>a;
if( a>='a' && a<='z' || a>='A' && a<='Z' ) {
cout<<"Alphabet";
}else{
cout<<"Not an alphabet";
}
return 0;
}
