#include<iostream>
using namespace std;
main() {
char a(a>='a' && a<='z' || a>='A' && a<='Z');
cout<<"Enter a character= ";
cin>>a;
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{cout<<"Vowel";
}else if(a>='b' && a<='d'||a>='f' &&a<='h'||a>='j'&&a<='n'||a>='p'&&a<='t'||a>='v'&&a<='z'){
cout<<"Consonant";
}else{
cout<<"Not an alphabet";
}
}
